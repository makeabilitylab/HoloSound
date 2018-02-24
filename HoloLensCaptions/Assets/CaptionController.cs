using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.XR.WSA;

#if !UNITY_EDITOR
using System.Diagnostics;
using Windows.Networking.Sockets;
using Windows.Storage.Streams;
#endif

namespace HoloToolkit.Unity
{
    public class CaptionController : Singleton<CaptionController>, InputModule.IInputClickHandler
    {
        public InputModule.InputManager input;

        List<GameObject> captions;

        GameObject MoveWithMeButton;
        GameObject AutoDistanceButton;
        GameObject DepthDebugButton;
        GameObject DepthObject;

        public bool MoveWithMe = false;
        public int CaptionDistance = 0;
        public bool DepthDebug = false;


        private bool settings_set = false;

#if !UNITY_EDITOR
            Uri uri = new Uri("ws://172.28.4.99:6502");
            private MessageWebSocket messageWebSocket;
#endif

        string message = "Hello! Captions are loading...";

        protected void Start()
        {
            input.AddGlobalListener(gameObject);

            captions = new List<GameObject>();
            captions.Add(transform.Find("CaptionsDisplay").gameObject);

            MoveWithMeButton = GameObject.Find("MoveWithMeButton");
            if (MoveWithMeButton == null)
            {
                throw new Exception("Can't find MoveWithMeButton");
            }

            AutoDistanceButton = GameObject.Find("AutoDistanceButton");
            if (AutoDistanceButton == null)
            {
                throw new Exception("Can't find AutoDistanceButton");
            }

            DepthDebugButton = GameObject.Find("DepthDebugButton");
            if (DepthDebugButton == null)
            {
                throw new Exception("Can't find DepthDebugButton)");
            }

            DepthObject = GameObject.Find("WorldMesh(CRASHES EDITOR)");
            if (DepthObject == null)
            {
                throw new Exception("Can't find WorldMesh(CRASHES EDITOR)");
            }

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

            if (!settings_set)
            {
                MoveWithMeButton.GetComponent<TextMesh>().text = MoveWithMe ? "Captions move with you" : "Captions are fixed to world";
                AutoDistanceButton.GetComponent<TextMesh>().text = (CaptionDistance==0) ? "Automatic depth" : ("Fixed depth: "+CaptionDistance+"m");
                DepthDebugButton.GetComponent<TextMesh>().text = DepthDebug ? "Showing depth debug" : "Not showing depth debug";

                gameObject.GetComponent<TranslateToCamera>().EnableMovement = MoveWithMe;

                DepthObject.GetComponent<SpatialMappingRenderer>().enabled = DepthDebug;

                settings_set = true;
            }
        }

        public void OnInputClicked(InputModule.InputClickedEventData eventData)
        {
            GameObject targeted = InputModule.FocusManager.Instance.TryGetFocusedObject(eventData);

            if (targeted == MoveWithMeButton)
            {
                MoveWithMe = !MoveWithMe;
                settings_set = false;
                return;
            }

            if (targeted == AutoDistanceButton)
            {
                if (CaptionDistance == 0)
                {
                    CaptionDistance = 1;
                } else if (CaptionDistance == 1)
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
                } else
                {
                    CaptionDistance = 0;
                }

                settings_set = false;
                return;
            }

            if (targeted == DepthDebugButton)
            {
                DepthDebug = !DepthDebug;
                settings_set = false;
                return;
            }

            if (captions.Count > 1) {
                GameObject focused = InputModule.FocusManager.Instance.TryGetFocusedObject(eventData);
                print(focused);
                eventData.Use();

                for (int i = captions.Count - 1; i >= 0; i--)
                {
                    GameObject o = captions[i];
                    if (o.GetComponent<GlassEarTagalong>().frozen && targeted == o) {
                        captions.RemoveAt(i);
                        Destroy(o);
                        return;
                    }
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
            newO.transform.SetParent(transform);
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
