using System;
using System.Collections.Generic;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine.XR.WSA;
using UnityEngine;

using Microsoft.CognitiveServices.Speech.Audio;
using Microsoft.CognitiveServices.Speech;

#if !UNITY_EDITOR
using System.Diagnostics;
using Windows.Networking.Sockets;
using Windows.Storage.Streams;
#endif

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
#if UNITY_EDITOR
        private float last_fake_message_time = 0;

#else
        Uri uri = new Uri("ws://128.208.49.41:6502");
            private MessageWebSocket messageWebSocket;
#endif

        protected void Start()
        {
            // subscription expired - restore once renewed
            // Invoke("StartContinuous", 3);

            input.AddGlobalListener(gameObject);

            micPermissionGranted = true;

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

            System.Diagnostics.Debug.WriteLine("Web socket script started.");
#if !UNITY_EDITOR
            startWebSocket();
#endif
            /*
            speechThread = new Thread(SpeechThreadFnc);
            speechThread.Start();
            */

        }


        void Update()
        {

#if UNITY_EDITOR

            if ((Time.time - last_fake_message_time) > 1)
            {
                last_fake_message_time = Time.time;

                string next_packet = last_packet;

                int nextword = UnityEngine.Random.Range(2, 6);

                while (nextword > 0)
                {
                    nextword--;
                    next_packet = next_packet + "a";
                }

                next_packet = next_packet + "\n";
                nextword = UnityEngine.Random.Range(2, 6);

                while (nextword > 0)
                {
                    nextword--;
                    next_packet = next_packet + "w";
                }

                if (next_packet.Length > 250)
                {
                    next_packet = next_packet.Substring(next_packet.Length - 250);
                }

                //OnPacket(next_packet);
            }
#else
            if (incoming_packet_counter > processed_incoming_packet_counter) {
                processed_incoming_packet_counter = incoming_packet_counter;
                OnPacket(incoming_packet);
            }

#endif

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

        /*
        public async void MSRec()
        {
            // Creates an instance of a speech config with specified subscription key and service region.
            // Replace with your own subscription key and service region (e.g., "westus").
            var config = SpeechConfig.FromSubscription("92c0ecbca76742ba9b52ebf14d91efbc", "westus");

            // Make sure to dispose the recognizer after use!
            using (var recognizer = new SpeechRecognizer(config))
            {
                lock (threadLocker)
                {
                    waitingForReco = true;
                }

                // Starts speech recognition, and returns after a single utterance is recognized. The end of a
                // single utterance is determined by listening for silence at the end or until a maximum of 15
                // seconds of audio is processed.  The task returns the recognition text as result.
                // Note: Since RecognizeOnceAsync() returns only a single utterance, it is suitable only for single
                // shot recognition like command or query.
                // For long-running multi-utterance recognition, use StartContinuousRecognitionAsync() instead.
                var result = await recognizer.RecognizeOnceAsync().ConfigureAwait(false);

                // Checks result.
                string newMessage = string.Empty;
                if (result.Reason == ResultReason.RecognizedSpeech)
                {
                    newMessage = result.Text;
                }
                else if (result.Reason == ResultReason.NoMatch)
                {
                    newMessage = "NOMATCH: Speech could not be recognized.";
                }
                else if (result.Reason == ResultReason.Canceled)
                {
                    var cancellation = CancellationDetails.FromResult(result);
                    newMessage = $"CANCELED: Reason={cancellation.Reason} ErrorDetails={cancellation.ErrorDetails}";
                }

                lock (threadLocker)
                {
                    message = newMessage;
                    Dispatcher.Instance.Invoke(() => OnPacket(message));
                    waitingForReco = false;
                }
            }
        }
        */

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
                SpeechConfig config = SpeechConfig.FromSubscription("92c0ecbca76742ba9b52ebf14d91efbc", "westus");
                config.SpeechRecognitionLanguage = fromLanguage;
                recognizer = new SpeechRecognizer(config);

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
                UnityEngine.Debug.LogFormat($"HYPOTHESIS: Text={e.Result.Text}");
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
                    incoming_packet_counter++;
                    incoming_packet = dataReader.ReadString(dataReader.UnconsumedBufferLength);
                    System.Diagnostics.Debug.WriteLine("Message received from MessageWebSocket: " + incoming_packet);
                    
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
