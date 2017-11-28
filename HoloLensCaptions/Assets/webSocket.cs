using System.Collections;
using System.Collections.Generic;
using UnityEngine;

#if !UNITY_EDITOR
using System;
using System.Diagnostics;
using Windows.Networking.Sockets;
using Windows.Storage.Streams;
#endif

public class webSocket : MonoBehaviour {
#if !UNITY_EDITOR
    Uri uri = new Uri("ws://172.28.4.99:6502");
    private MessageWebSocket messageWebSocket;
#endif
    protected TextMesh captionDisplay;
    string message = "Hello! Captions are loading...";

    void Start()
    {
        captionDisplay = GetComponent<TextMesh>();
        System.Diagnostics.Debug.WriteLine("Web socket script started.");
        WindowsFunction();    
    }

    // Update is called once per frame
    void Update()
    {
        /*
         * To display in 2 lines
        int displayLen = 60;        //should be even+ 
        if(message.Length >= displayLen)
            captionDisplay.text = message.Substring(message.Length - displayLen, displayLen/2) + "\n" + message.Substring(message.Length - displayLen/2, displayLen/2);
        else if (message.Length < displayLen && message.Length >= displayLen / 2)
            captionDisplay.text = message.Substring(0, displayLen / 2) + "\n" + message.Substring(displayLen / 2, message.Length - displayLen/2);
        else
            captionDisplay.text = message; 
        */
        if (message.Length > 60) 
            captionDisplay.text = message.Substring(message.Length - 60);
        else
            captionDisplay.text = message;
    }

    void WindowsFunction()
    {
#if !UNITY_EDITOR
        startWebSocket();
#endif
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
