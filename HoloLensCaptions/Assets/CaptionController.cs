using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

#if !UNITY_EDITOR
using System.Diagnostics;
using Windows.Networking.Sockets;
using Windows.Storage.Streams;
#endif

namespace HoloToolkit.Unity
{
    public class CaptionController : MonoBehaviour, InputModule.IInputClickHandler
    {
        public InputModule.InputManager input;

        List<GameObject> captions;

        #if !UNITY_EDITOR
            Uri uri = new Uri("ws://172.28.4.99:6502");
            private MessageWebSocket messageWebSocket;
        #endif

        string message = "Hello! Captions are loading...";

        protected void Start()
        {
            input.AddGlobalListener(gameObject);

            captions = new List<GameObject>();
            GameObject o = transform.Find("CaptionsDisplay").gameObject;
            if (o==null) {
                throw new Exception("Can't find child CaptionsDisplay");
            }
            captions.Add(o);

            System.Diagnostics.Debug.WriteLine("Web socket script started.");
            #if !UNITY_EDITOR
            startWebSocket();
            #endif
        }

        void Update()
        {
            foreach (GameObject o in captions) {
                o.GetComponent<GlassEarTagalong>().SetMessage(message);
            }
        }

        public void OnInputClicked(InputModule.InputClickedEventData eventData)
        {
            if (captions.Count > 1) {
                bool deleted = false;

                for (int i = captions.Count - 1; i >= 0; i--)
                {
                    GameObject o = captions[i];
                    if (o.GetComponent<GlassEarTagalong>().IsTargeted()) {
                        captions.RemoveAt(i);
                        Destroy(o);
                        deleted = true;
                    }
                }

                if (deleted) {
                    return;
                }
            }

            foreach (GameObject o in captions) {
                if (!o.GetComponent<GlassEarTagalong>().frozen) {
                    o.GetComponent<GlassEarTagalong>().frozen = true;
                    return;
                }
            }

            GameObject newO = Instantiate(captions[0]);
            newO.GetComponent<GlassEarTagalong>().frozen = false;
            captions.Add(newO);
        }
        
    #if !UNITY_EDITOR
        private async void startWebSocket()
        {

            messageWebSocket = new MessageWebSocket();
            messageWebSocket.Control.MessageType = SocketMessageType.Utf8;
            messageWebSocket.MessageReceived += WebSocket_MessageReceived;
            messageWebSocket.Closed += WebSocket_Closed;

            try
            {
                await messageWebSocket.ConnectAsync(uri);
                System.Diagnostics.Debug.WriteLine("Connected to Server");
            }
            catch (Exception ex)
            {
                System.Diagnostics.Debug.WriteLine(ex.Message + " / " + ex.HResult + " / " + ex.Data);
            }
            //// NOTE: Refer to https://docs.microsoft.com/en-us/windows/uwp/networking/websockets if you want to send message as a seperate thread ////

        }

        private void WebSocket_MessageReceived(MessageWebSocket sender, MessageWebSocketMessageReceivedEventArgs args)
        {
            try
            {
                using (DataReader dataReader = args.GetDataReader())
                {
                    dataReader.UnicodeEncoding = UnicodeEncoding.Utf8;
                    message = dataReader.ReadString(dataReader.UnconsumedBufferLength);
                    System.Diagnostics.Debug.WriteLine("Message received from MessageWebSocket: " + message);
                    
                    //messageWebSocket.Dispose();
                }
            }
            catch (Exception ex)
            {
                Windows.Web.WebErrorStatus webErrorStatus = WebSocketError.GetStatus(ex.GetBaseException().HResult);
                // Add additional code here to handle exceptions.
            }
        }

        private void WebSocket_Closed(IWebSocket sender, WebSocketClosedEventArgs args)
        {
            System.Diagnostics.Debug.WriteLine("WebSocket_Closed; Code: " + args.Code + ", Reason: \"" + args.Reason + "\"");
            // Add additional code here to handle the WebSocket being closed.
        }
        // Use this for initialization
    #endif

    }
}
