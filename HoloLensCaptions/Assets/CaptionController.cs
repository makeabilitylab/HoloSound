using System;
using System.Text;
using System.Collections.Generic;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine.XR.WSA;
using UnityEngine;

using Microsoft.CognitiveServices.Speech.Audio;
using Microsoft.CognitiveServices.Speech;
using BestHTTP.SocketIO;
using System.Collections;


namespace HoloToolkit.Unity
{
    public class CaptionController : Singleton<CaptionController>, InputModule.IInputClickHandler
    {
        // ---------------------------//
        private bool waitingForReco;
        private string message;
        //

        public InputModule.InputManager input;

        List<GameObject> captions;

        GameObject DepthObject;
        GameObject CursorObject;
        GameObject CursorVisual;

        public bool MoveWithMe = false;
        public int CaptionDistance = 0;
        public bool DepthDebug = false;
        public bool ShowCursor = true;
        public int TextSize = 0;
        public int TextLines = 2;
        public int TextLineLength = 60;


        private bool settings_set = false;

        string last_packet = "";
        string incoming_packet = "";
        int incoming_packet_counter = 0;
        int processed_incoming_packet_counter = 0;

        private Thread speechThread;

        string[] button_names =
        {
            "MoveWithMe",
            "AutoDistance",
            "TextSize",
            "TextLines",
            "TextLineLength",
            "ShowCursor",
            "DepthDebug"
        };
        Dictionary<string, GameObject> buttons;

        // ------ MS API START -------
        private bool micPermissionGranted = false;

        // Used to show live messages on screen, must be locked to avoid threading deadlocks since
        // the recognition events are raised in a separate thread
        private string finalString = "";
        private string curString = "";
        private string intermString = "";
        private string errorString = "";
        private string classString = "";
        private string emitRequestString = "";
        private System.Object threadLocker = new System.Object();

        // Speech recognition key, required
        [Tooltip("Connection string to Cognitive Services Speech.")]
        public string SpeechServiceAPIKey = "92c0ecbca76742ba9b52ebf14d91efbc";
        [Tooltip("Region for your Cognitive Services Speech instance (must match the key).")]
        public string SpeechServiceRegion = "westus";

        // Cognitive Services Speech objects used for Speech Recognition
        private SpeechRecognizer recognizer;
        string fromLanguage = "en-us";
        // ------ MS API END -------

        private Microphone mic;
        private AudioClip micClip;
        private int pos;
        private int lastPos;
        private int pos_class;
        private int lastPos_class;
        private static int RATE = 16000;
        private static int CHUNK = 1600;
        private float[] sample;
        private float[] sample_class;
        private MicToAudioStream audioStream;
        public GameObject soundClassDisplay;

        LinkedList<String> outlst = new LinkedList<String>();
        int len = 0;
        int delayCounter = 0;

        SocketManager manager;

        const int CHANNELS = 1;
        Dictionary<String, short[]> dict = new Dictionary<string, short[]>();
        Queue<float[]> queue = new Queue<float[]>();


        System.Net.Sockets.TcpClient tcpclient;
        System.Net.Sockets.NetworkStream outstream;

        protected void Start()
        {
            micPermissionGranted = true;
            micClip = Microphone.Start("", true, 10, RATE);
            pos = 0;
            lastPos = 0;
            pos_class = 0;
            lastPos_class = 0;
            sample = new float[CHUNK];
            sample_class = new float[RATE];
            input.AddGlobalListener(gameObject);
            classString = "started";


            SocketOptions options = new SocketOptions();
            options.AutoConnect = true;
            options.ConnectWith = BestHTTP.SocketIO.Transports.TransportTypes.WebSocket;

            //manager = new SocketManager(new Uri("ws://128.208.49.41:8787/socket.io/"), options);
            //manager.Socket.On(SocketIOEventTypes.Connect, OnServerConnect);
            //manager.Socket.On(SocketIOEventTypes.Disconnect, OnServerDisconnect);
            //manager.Socket.On(SocketIOEventTypes.Error, OnError);
            //manager.Socket.On("audio_label", GetAudioLabel);

            StartContinuous();

            captions = new List<GameObject>();
            captions.Add(transform.Find("CaptionsDisplay").gameObject);

            CursorObject = GameObject.Find("DefaultCursor");
            if (CursorObject == null)
            {
                throw new Exception("Can't find DefaultCursor");
            }

            CursorVisual = GameObject.Find("CursorVisual");
            if (CursorVisual == null)
            {
                throw new Exception("Can't find CursorVisual");
            }

            GameObject menu = GameObject.Find("Menu");
            if (menu == null)
            {
                throw new Exception("Can't find Menu");
            }

            GameObject menubutton = GameObject.Find("MenuButton");
            if (menubutton == null)
            {
                throw new Exception("Can't find MenuButton");
            }


            float yp = 0;

            buttons = new Dictionary<string, GameObject>();

            foreach (string name in button_names)
            {
                GameObject nextbutton = Instantiate(menubutton);
                nextbutton.transform.parent = menu.transform;
                nextbutton.transform.localPosition = new Vector3(0, yp, 0);
                nextbutton.transform.localRotation = Quaternion.identity;
                nextbutton.transform.localScale = Vector3.one;
                yp += 0.09f;

                buttons.Add(name, nextbutton);
            }

            Destroy(menubutton);

            DepthObject = GameObject.Find("WorldMesh(CRASHES EDITOR)");
            if (DepthObject == null)
            {
                throw new Exception("Can't find WorldMesh(CRASHES EDITOR)");
            }
            //StartCoroutine(TranscribingCoroutine());
            //StartCoroutine(emitCoroutine());
            //StartCoroutine(classificationCoroutine());


            tcpclient = new System.Net.Sockets.TcpClient();
            tcpclient.Connect("attu1.cs.washington.edu", 23401);
            outstream = tcpclient.GetStream();
        }

        public void EchoFn(Socket socket, Packet packet, params object[] args)
        {
            UnityEngine.Debug.Log("echo received");
            object[] res = packet.Decode(socket.Manager.Encoder);
            Dictionary<String, System.Object> dic = (Dictionary<String, System.Object>)res[0];
            UnityEngine.Debug.Log(dic["echo"].ToString());
        }

        void OnServerConnect(Socket socket, Packet packet, params object[] args)
        {
            UnityEngine.Debug.Log("Connected");
        }

        void OnServerDisconnect(Socket socket, Packet packet, params object[] args)
        {
            UnityEngine.Debug.Log("Disconnected");
        }

        void OnError(Socket socket, Packet packet, params object[] args)
        {
            Error error = args[0] as Error;
            UnityEngine.Debug.LogWarning(error.ToString());
            switch (error.Code)
            {
                case SocketIOErrors.User:
                    UnityEngine.Debug.LogWarning("Exception in an event handler!");
                    break;
                case SocketIOErrors.Internal:
                    UnityEngine.Debug.LogWarning("Internal error!");
                    break;
                default:
                    UnityEngine.Debug.LogWarning("server error!");
                    break;
            }
        }

        public void GetAudioLabel(Socket socket, Packet packet, params object[] args)
        {
            UnityEngine.Debug.Log("label received");
            object[] res = packet.Decode(socket.Manager.Encoder);
            Dictionary<String, System.Object> dic = (Dictionary<String, System.Object>)res[0];
            string label = dic["label"].ToString();
            print(label);
            if (label != "Unrecognized Sound") // && label != "Speech")
            {
                outlst.AddLast(label);
                len++;
                if (len > 3)
                {
                    outlst.RemoveFirst();
                }
                classString = "";
                foreach (String o in outlst)
                {
                    classString += o + "\n";
                }
            }
        }

        private byte[] FloatToByte(byte[] arrb, float[] arrf)
        {
            for (int i = 0; i < arrf.Length; i++)
            {
                byte[] bi = System.BitConverter.GetBytes((short)(arrf[i] * 32768f));
                arrb[2 * i] = bi[0];
                arrb[2 * i + 1] = bi[1];
            }
            return arrb;
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

        void Update()
        {

            if (!settings_set)
            {
                buttons["MoveWithMe"].GetComponent<TextMesh>().text = MoveWithMe ? "Captions move with you" : "Captions are fixed to world";
                buttons["AutoDistance"].GetComponent<TextMesh>().text = (CaptionDistance == 0) ? "Automatic depth" : ("Fixed depth: " + CaptionDistance + "m");
                buttons["DepthDebug"].GetComponent<TextMesh>().text = DepthDebug ? "Showing depth debug" : "Not showing depth debug";
                buttons["ShowCursor"].GetComponent<TextMesh>().text = ShowCursor ? "Showing cursor" : "Not showing cursor";
                buttons["TextSize"].GetComponent<TextMesh>().text = "Text size: " + (TextSize == 0 ? "small" : (TextSize == 1 ? "medium" : "large"));
                buttons["TextLines"].GetComponent<TextMesh>().text = "Text lines: " + TextLines;
                buttons["TextLineLength"].GetComponent<TextMesh>().text = "Line length: " + TextLineLength + " characters";

                gameObject.GetComponent<TranslateToCamera>().EnableMovement = MoveWithMe;

                DepthObject.GetComponent<SpatialMappingRenderer>().enabled = DepthDebug;
                CursorVisual.transform.localScale = ShowCursor ? new Vector3(0.03f, 0.03f, 0.03f) : new Vector3(0.0f, 0.0f, 0.0f);

                settings_set = true;
            }


            InputModule.CursorStateEnum cursorState = CursorObject.GetComponent<InputModule.AnimatedCursor>().CursorState;
            if (cursorState == InputModule.CursorStateEnum.Interact || cursorState == InputModule.CursorStateEnum.InteractHover || cursorState == InputModule.CursorStateEnum.Select)
            {
                InputModule.IPointingSource thisistoocomplex;
                if (InputModule.FocusManager.Instance.TryGetSinglePointer(out thisistoocomplex))
                {
                    GameObject focused = InputModule.FocusManager.Instance.GetFocusedObject(thisistoocomplex);

                    if (captions.Count > 1)
                    {
                        for (int i = captions.Count - 1; i >= 0; i--)
                        {
                            GameObject o = captions[i];
                            if (o.GetComponent<GlassEarTagalong>().frozen && focused == o)
                            {
                                o.GetComponent<GlassEarTagalong>().lastHoverTime = Time.time;
                            }
                        }
                    }

                    foreach (KeyValuePair<string, GameObject> b in buttons)
                    {
                        if (focused == b.Value)
                        {
                            b.Value.GetComponent<HighightControl>().HoverTime = Time.time;
                        }
                    }
                }
            }

            // UnityEngine.Debug.Log("updating class " + classString);
            soundClassDisplay.GetComponent<TextMesh>().text = classString;

            pos = Microphone.GetPosition(null);

            if (pos < lastPos)
            {
                pos += 10 * RATE;
            }
            if (pos > lastPos + CHUNK)
            {
                // UnityEngine.Debug.Log("speech " + pos + " " + lastPos);
                micClip.GetData(sample, lastPos);
                lastPos = lastPos + CHUNK;
                if (lastPos > RATE * 10)
                {
                    lastPos -= RATE * 10;
                }
                byte[] barry = new byte[sample.Length * 2];
                FloatToByte(barry, sample);
                audioStream.Write(barry, 0, barry.Length);
            }

            float[] copyArr = new float[sample.Length];
            for (var i = 0; i < sample.Length; i++)
                copyArr[i] = sample[i];
            queue.Enqueue(copyArr);
            if (queue.Count >= 10)
            {
                for (var i = 0; i < 10; i++)
                {
                    copyArr = queue.Dequeue();
                    for (var j = 0; j < sample.Length; j++)
                        sample_class[j + CHUNK * i] = copyArr[j];
                }
                queue.Clear();
                ////micClip.GetData(sample_class, pos_class - RATE);
                ////UnityEngine.Debug.Log("emitting " + pos_class + " " + lastPos_class);
                ////lastPos_class = pos_class;
                ////dict["data"] = FloatToShort(sample_class);

                //StringBuilder sb = new StringBuilder();
                ////sb.Append("42");
                ////sb.Append("[\"audio_data\", {\"data\":[");'
                ////sb.Append("[");

                //short[] temp = FloatToShort(sample_class);

                //print(string.Join(", ", temp));
                ///*
                //for (int i = 0; i < temp.Length - 1; i++)
                //{
                //    sb.Append(temp[i]);
                //    sb.Append(", ");
                //}
                //*/
                //// sb.Append(temp[temp.Length - 1]);

                //sb.Append(string.Join(",", temp));
                //// sb.Append("]}]");
                //// sb.Append("]");
                //emitRequestString = sb.ToString();

                if (outstream.CanWrite)
                {
                    //byte[] data = System.Text.Encoding.UTF8.GetBytes(emitRequestString);
                    byte[] data = new byte[32000];
                    FloatToByte(data, sample_class);
                    // print(string.Join(", ", data));
                    outstream.Write(data, 0, data.Length);
                }
                /*
                if (outstream.DataAvailable)
                {
                    
                    byte[] result = new byte[outstream.Length];
                    int bytes = outstream.Read(result, 0, (int)outstream.Length);
                    UnityEngine.Debug.Log(System.Text.Encoding.UTF8.GetString(result, 0, bytes));
                    
                    
                }
                */

                while (outstream.DataAvailable)
                {
                    byte[] buf = new byte[128];
                    int bytes = outstream.Read(buf, 0, 128);
                    string label = System.Text.Encoding.UTF8.GetString(buf, 0, bytes);

                    if (label != "Unrecognized Sound") // && label != "Speech")
                    {
                        outlst.AddLast(label);
                        len++;
                        if (len > 3)
                        {
                            outlst.RemoveFirst();
                        }
                        classString = "";
                        foreach (String o in outlst)
                        {
                            classString += o + "\n";
                        }
                    }
                }


            //manager.Socket.MyEmit("audio_data", emitRequestString);

            //manager.Socket.MyEmit("audio_data", emitRequestString);
        }
            delayCounter += 1;


            lock (threadLocker)
            {
                if (intermString.Length > 0)
                {
                    OnPacket_interm(intermString);
                    intermString = "";
                }
                if (curString.Length > 0)
                {
                    OnPacket(curString);
                    curString = "";
                }
            }



        }

        private void OnPacket_interm(string intermString)
        {

            foreach (GameObject o in captions)
            {
                o.GetComponent<GlassEarTagalong>().AddText_interm(intermString);
            }

        }

        public void OnPacket(string message)
        {
            int overlap_length = message.Length;

            while (overlap_length > 0)
            {
                if (last_packet.EndsWith(message.Substring(0, overlap_length)))
                {
                    break;
                }
                overlap_length--;
            }

            string addition = message.Substring(overlap_length);

            foreach (GameObject o in captions)
            {
                o.GetComponent<GlassEarTagalong>().AddText(addition);
            }

            last_packet = message;
        }

        public void OnInputClicked(InputModule.InputClickedEventData eventData)
        {
            GameObject targeted = InputModule.FocusManager.Instance.TryGetFocusedObject(eventData);

            foreach (KeyValuePair<string, GameObject> b in buttons)
            {

                if (targeted == b.Value)
                {
                    switch (b.Key)
                    {
                        case "MoveWithMe":
                            MoveWithMe = !MoveWithMe;
                            break;
                        case "DepthDebug":
                            DepthDebug = !DepthDebug;
                            break;
                        case "ShowCursor":
                            ShowCursor = !ShowCursor;
                            break;
                        case "AutoDistance":
                            if (CaptionDistance == 0)
                            {
                                CaptionDistance = 1;
                            }
                            else if (CaptionDistance == 1)
                            {
                                CaptionDistance = 2;
                            }
                            else if (CaptionDistance == 2)
                            {
                                CaptionDistance = 4;
                            }
                            else if (CaptionDistance == 4)
                            {
                                CaptionDistance = 8;
                            }
                            else
                            {
                                CaptionDistance = 0;
                            }
                            break;
                        case "TextSize":
                            TextSize = (TextSize + 1) % 3;
                            break;
                        case "TextLines":
                            TextLines = (TextLines % 5) + 1;
                            break;
                        case "TextLineLength":
                            TextLineLength += 20;
                            if (TextLineLength > 80)
                            {
                                TextLineLength = 40;
                            }
                            break;
                    }

                    settings_set = false;

                    eventData.Use();
                    return;
                }
            }


            if (captions.Count > 1)
            {
                for (int i = captions.Count - 1; i >= 0; i--)
                {
                    GameObject o = captions[i];
                    if (o.GetComponent<GlassEarTagalong>().frozen && targeted == o)
                    {
                        captions.RemoveAt(i);
                        Destroy(o);

                        eventData.Use();
                        return;
                    }
                }
            }

            foreach (GameObject o in captions)
            {
                if (!o.GetComponent<GlassEarTagalong>().frozen)
                {
                    o.GetComponent<GlassEarTagalong>().frozen = true;

                    eventData.Use();
                    return;
                }
            }

            GameObject newO = Instantiate(captions[0]);
            newO.GetComponent<GlassEarTagalong>().frozen = false;
            newO.transform.SetParent(transform);
            captions.Add(newO);

            eventData.Use();
            return;
        }

        public void respondToInput()
        {
            OnPacket("test");
        }

        /// <summary>
        /// Attach to button component used to launch continuous recognition (with or without translation)
        /// </summary>
        public void StartContinuous()
        {
            errorString = "";
            if (micPermissionGranted)
            {
                StartContinuousRecognition();
            }
            else
            {
                finalString = "This app cannot function without access to the microphone.";
                errorString = "ERROR: Microphone access denied.";
                UnityEngine.Debug.LogFormat(errorString);
            }



        }

        /// <summary>
        /// Initiate continuous speech recognition from the default microphone.
        /// </summary>
        private async void StartContinuousRecognition()
        {
            UnityEngine.Debug.LogFormat("Starting Continuous Speech Recognition.");
            CreateSpeechRecognizer();

            if (recognizer != null)
            {
                UnityEngine.Debug.LogFormat("Starting Speech Recognizer.");
                await recognizer.StartContinuousRecognitionAsync().ConfigureAwait(false);

                finalString = "Speech Recognizer is now running.";
                UnityEngine.Debug.LogFormat("Speech Recognizer is now running.");
            }
            UnityEngine.Debug.LogFormat("Start Continuous Speech Recognition exit");
        }

        /// <summary>
        /// Creates a class-level Speech Recognizer for a specific language using Azure credentials
        /// and hooks-up lifecycle & recognition events
        /// </summary>
        void CreateSpeechRecognizer()
        {
            if (SpeechServiceAPIKey.Length == 0 || SpeechServiceAPIKey == String.Empty)
            {
                finalString = "You forgot to obtain Cognitive Services Speech credentials and inserting them in this app." + Environment.NewLine +
                                   "See the README file and/or the instructions in the Awake() function for more info before proceeding.";
                errorString = "ERROR: Missing service credentials";
                UnityEngine.Debug.LogFormat(errorString);
                return;
            }
            UnityEngine.Debug.LogFormat("Creating Speech Recognizer.");
            // finalString = "Initializing speech recognition, please wait...";
            finalString = "Start: ";

            if (recognizer == null)
            {
                SpeechConfig sconfig = SpeechConfig.FromSubscription("b9bdc34702c1439589daf92475e8f827", "westus2");
                sconfig.SpeechRecognitionLanguage = fromLanguage;

                audioStream = new MicToAudioStream();
                AudioConfig aconfig = AudioConfig.FromStreamInput(audioStream, AudioStreamFormat.GetWaveFormatPCM(16000, 16, 1));

                recognizer = new SpeechRecognizer(sconfig, aconfig);

                if (recognizer != null)
                {
                    // Subscribes to speech events.
                    recognizer.Recognizing += RecognizingHandler;
                    recognizer.Recognized += RecognizedHandler;
                    recognizer.SpeechStartDetected += SpeechStartDetectedHandler;
                    recognizer.SpeechEndDetected += SpeechEndDetectedHandler;
                    recognizer.Canceled += CanceledHandler;
                    recognizer.SessionStarted += SessionStartedHandler;
                    recognizer.SessionStopped += SessionStoppedHandler;
                }
            }
            UnityEngine.Debug.LogFormat("CreateSpeechRecognizer exit");
        }

        #region Speech Recognition event handlers
        private void SessionStartedHandler(object sender, SessionEventArgs e)
        {
            UnityEngine.Debug.LogFormat($"\n    Session started event. Event: {e.ToString()}.");
        }

        private void SessionStoppedHandler(object sender, SessionEventArgs e)
        {
            UnityEngine.Debug.LogFormat($"\n    Session event. Event: {e.ToString()}.");
            UnityEngine.Debug.LogFormat($"Session Stop detected. Stop the recognition.");
        }

        private void SpeechStartDetectedHandler(object sender, RecognitionEventArgs e)
        {
            UnityEngine.Debug.LogFormat($"SpeechStartDetected received: offset: {e.Offset}.");
        }

        private void SpeechEndDetectedHandler(object sender, RecognitionEventArgs e)
        {
            UnityEngine.Debug.LogFormat($"SpeechEndDetected received: offset: {e.Offset}.");
            UnityEngine.Debug.LogFormat($"Speech end detected.");
        }

        // "Recognizing" events are fired every time we receive interim results during recognition (i.e. hypotheses)
        private void RecognizingHandler(object sender, SpeechRecognitionEventArgs e)
        {
            if (e.Result.Reason == ResultReason.RecognizingSpeech)
            {
                // UnityEngine.Debug.LogFormat($"HYPOTHESIS: Text={e.Result.Text}");
                lock (threadLocker)
                {
                    // finalString = $"HYPOTHESIS: {Environment.NewLine}{e.Result.Text}";
                    intermString = e.Result.Text;
                    // finalString = $"{curString}  {intermString}";
                }
            }
        }

        // "Recognized" events are fired when the utterance end was detected by the server
        private void RecognizedHandler(object sender, SpeechRecognitionEventArgs e)
        {
            if (e.Result.Reason == ResultReason.RecognizedSpeech)
            {
                UnityEngine.Debug.LogFormat($"RECOGNIZED: Text={e.Result.Text}");
                lock (threadLocker)
                {
                    // finalString = $"RESULT: {Environment.NewLine}{e.Result.Text}";
                    // curString = $"{curString}  {e.Result.Text}";
                    // finalString = curString;
                    // finalString = $"{e.Result.Text}";
                    curString = e.Result.Text;
                }
            }
            else if (e.Result.Reason == ResultReason.NoMatch)
            {
                UnityEngine.Debug.LogFormat($"NOMATCH: Speech could not be recognized.");
            }
        }

        // "Canceled" events are fired if the server encounters some kind of error.
        // This is often caused by invalid subscription credentials.
        private void CanceledHandler(object sender, SpeechRecognitionCanceledEventArgs e)
        {
            UnityEngine.Debug.LogFormat($"CANCELED: Reason={e.Reason}");

            errorString = e.ToString();
            if (e.Reason == CancellationReason.Error)
            {
                UnityEngine.Debug.LogFormat($"CANCELED: ErrorDetails={e.ErrorDetails}");
                UnityEngine.Debug.LogFormat($"CANCELED: Did you update the subscription info?");
            }
        }
        #endregion

        /// <summary>
        /// Stops the recognition on the speech recognizer or translator as applicable.
        /// Important: Unhook all events & clean-up resources.
        /// </summary>
        public async void StopRecognition()
        {
            if (recognizer != null)
            {
                await recognizer.StopContinuousRecognitionAsync().ConfigureAwait(false);
                recognizer.Recognizing -= RecognizingHandler;
                recognizer.Recognized -= RecognizedHandler;
                recognizer.SpeechStartDetected -= SpeechStartDetectedHandler;
                recognizer.SpeechEndDetected -= SpeechEndDetectedHandler;
                recognizer.Canceled -= CanceledHandler;
                recognizer.SessionStarted -= SessionStartedHandler;
                recognizer.SessionStopped -= SessionStoppedHandler;
                recognizer.Dispose();
                recognizer = null;
                finalString = "Speech Recognizer is now stopped.";
                UnityEngine.Debug.LogFormat("Speech Recognizer is now stopped.");
            }
        }

        IEnumerator emitCoroutine()
        {
            yield return new WaitForSeconds(1);
            while (true)
            {
                //manager.Socket.Emit("audio_data", dict);
                UnityEngine.Debug.Log("emitting  " + emitRequestString);
                manager.Socket.MyEmit("audio_data", emitRequestString);

                yield return new WaitForSeconds(1f);
            }

            yield return null;
        }

        IEnumerator TranscribingCoroutine()
        {
            while (true)
            {
                
                yield return new WaitForSeconds(0.05f);
            }
        }

        //IEnumerator classificationCoroutine()
        //{
        //    while (true)
        //    {
        //        pos_class = Microphone.GetPosition(null);
        //        if (pos_class < lastPos_class)
        //        {
        //            pos_class += 10 * RATE;
        //        }
        //        if (pos_class > lastPos_class + RATE)
        //        {
        //            micClip.GetData(sample_class, pos_class - RATE);
        //            //UnityEngine.Debug.Log("emitting " + pos_class + " " + lastPos_class);
        //            lastPos_class = pos_class;
        //            //dict["data"] = FloatToShort(sample_class);

        //            StringBuilder sb = new StringBuilder();
        //            sb.Append("[\"audio_data\", {\"data\":[");
        //            short[] temp = FloatToShort(sample_class);
        //            //UnityEngine.Debug.Log(emitRequestString);
        //            //for (int i = 0; i < temp.Length - 1; i++)
        //            //{
        //            //    sb.Append(temp[i]);
        //            //    sb.Append(", ");
        //            //}
        //            //sb.Append(temp[temp.Length - 1]);
        //            sb.Append(string.Join(",", temp));
        //            sb.Append("]}]");
        //            emitRequestString = sb.ToString();
        //            UnityEngine.Debug.Log(emitRequestString);
        //        }

        //        yield return new WaitForSeconds(0.5f);
        //    }
        //}
    }
}
