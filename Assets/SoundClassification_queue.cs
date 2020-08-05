using System;
using System.Collections.Generic;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine.XR.WSA;
using UnityEngine;
using System.Threading;
using System.IO;
using System.Collections.Concurrent;
using System.Linq;

using Microsoft.CognitiveServices.Speech.Audio;
using Microsoft.CognitiveServices.Speech;
using BestHTTP.SocketIO;


namespace HoloToolkit.Unity
{
    public class SoundClassification_queue : MonoBehaviour
    {
        LinkedList<String> outlst = new LinkedList<String>();
        int len = 0;
        String outStr = "Starting...";

        SocketManager manager;

        const int RATE = 16000;
        const int CHANNELS = 1;
        byte[] bytes = new Byte[RATE];
        AudioClip mic;
        int lastPos, pos;
        public GameObject soundClassDisplay;
        float[] sample = new float[RATE];
        Dictionary<String, short[]> dict = new Dictionary<string, short[]>();
        int t = 0;
        ConcurrentQueue<int> buffer = new ConcurrentQueue<int>();

        protected void Start()
        {
            Debug.Log("Mic start");
            mic = Microphone.Start("", true, 10, RATE);

            //socket.On("echo", EchoFn);
            //socket.On("audio_label", GetAudioLabel);
            soundClassDisplay.GetComponent<TextMesh>().text = "started";

            SocketOptions options = new SocketOptions();
            options.AutoConnect = true;
            options.ConnectWith = BestHTTP.SocketIO.Transports.TransportTypes.WebSocket;

            manager = new SocketManager(new Uri("ws://128.208.49.41:8787/socket.io/"), options);
            manager.Socket.On(SocketIOEventTypes.Connect, OnServerConnect);
            manager.Socket.On(SocketIOEventTypes.Disconnect, OnServerDisconnect);
            manager.Socket.On(SocketIOEventTypes.Error, OnError);
            manager.Socket.On("audio_label", GetAudioLabel);
        }

        public void ConnectToServer()
        {
            //Socket sockChat = manager.GetSocket("/socket.io"); 
            //manager.Socket.On(SocketIOEventTypes.Error, (socket, packet, args) => Debug.LogError(string.Format("Error: {0}", args[0].ToString())));

            //manager.Socket.On("echo", EchoFn);

            //Debug.Log("message sent");
            //Dictionary<String, String> dict = new Dictionary<string, string>();
            //dict["message"] = "test";
            //manager.Socket.Emit("send_message", dict);
            //manager.Open();
        }

        public short[] FloatToShort(float[] input)
        {
            int len = input.Length;
            short[] output = new short[len];
            for (int n = 0; n < len; n++)
            {
                output[n] = (short)(input[n] * 32768f);
            }
            return output;
        }

        public byte[] ShortToByte(short[] arrs)
        {
            byte[] arrb = new byte[arrs.Length * 2];

            for (int i = 0; i < arrs.Length; i++)
            {
                byte[] bi = System.BitConverter.GetBytes(arrs[i]);
                arrb[2 * i] = bi[0];
                arrb[2 * i + 1] = bi[1];
            }
            return arrb;
        }

        public void EchoFn(Socket socket, Packet packet, params object[] args)
        {
            Debug.Log("echo received");
            object[] res = packet.Decode(socket.Manager.Encoder);
            Dictionary<String, System.Object> dic = (Dictionary<String, System.Object>)res[0];
            Debug.Log(dic["echo"].ToString());
        }

        public void GetAudioLabel(Socket socket, Packet packet, params object[] args)
        {
            //Debug.Log(string.Format("[name: {0}, data: {1}]", e.name, e.data));
            //string label = e.data.GetField("label").str;
            //if (label != "Unrecognized Sound" && label != "Speech")
            //{
            //    Debug.Log(label);
            //}
            object[] res = packet.Decode(socket.Manager.Encoder);
            Dictionary<String, System.Object> dic = (Dictionary<String, System.Object>)res[0];
            string label = dic["label"].ToString();
            Debug.Log(label);
            if (label != "Unrecognized Sound") // && label != "Speech")
            {
                outlst.AddLast(label);
                len++;
                if (len > 3)
                {
                    outlst.RemoveFirst();
                }
                outStr = "";
                foreach (String o in outlst)
                {
                    outStr += o + "\n";
                }
                soundClassDisplay.GetComponent<TextMesh>().text = outStr;
            }
        }


        void Update()
        {
            pos = Microphone.GetPosition(null);
            if (pos < lastPos)
            {
                lastPos = 0;
            }
            if (pos > lastPos + RATE && t > 60)
            {
                t++;
                //Debug.Log(Microphone.GetPosition(null) + "  " + lastPos);
                mic.GetData(sample, pos - RATE);
                lastPos = pos - RATE;
                //Debug.Log(pos + " " + lastPos);
                dict["data"] = FloatToShort(sample);

                //JSONObject data = new JSONObject(JSONObject.Type.OBJECT);
                //JSONObject arr = new JSONObject(JSONObject.Type.ARRAY);
                //data.AddField("data", arr);
                //foreach (short num in FloatToShort(sample))
                //{
                //    arr.Add(num);
                //}
                //string t = BestHTTP.JSON.Json.Encode(dict);
                manager.Socket.Emit("audio_data", dict);
            }
            t++;
        }

        void OnDestroy()
        {
            manager.Close();
            Microphone.End(null);
        }

        void OnServerConnect(Socket socket, Packet packet, params object[] args)
        {
            Debug.Log("Connected");
        }

        void OnServerDisconnect(Socket socket, Packet packet, params object[] args)
        {
            Debug.Log("Disconnected");
        }

        void OnError(Socket socket, Packet packet, params object[] args)
        {
            Error error = args[0] as Error;
            Debug.LogWarning(error.ToString());
            switch (error.Code)
            {
                case SocketIOErrors.User:
                    Debug.LogWarning("Exception in an event handler!");
                    break;
                case SocketIOErrors.Internal:
                    Debug.LogWarning("Internal error!");
                    break;
                default:
                    Debug.LogWarning("server error!");
                    break;
            }
        }

    }
}
