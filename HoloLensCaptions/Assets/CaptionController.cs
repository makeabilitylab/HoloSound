using Google.Apis.Auth.OAuth2;
using Google.Cloud.Speech.V1;
using Grpc.Auth;
using Grpc.Core;
using System;
using System.Collections.Generic;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using static Google.Api.Gax.Expiration;
using UnityEngine.XR.WSA;
using UnityEngine;

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
        private object threadLocker = new object();
        private bool waitingForReco;
        private string message;
        private bool micPermissionGranted = false;
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

#if UNITY_EDITOR
        private float last_fake_message_time = 0;

#else
        Uri uri = new Uri("ws://128.208.49.41:6502");
            private MessageWebSocket messageWebSocket;
#endif

        public void respondToInput()
        {
            OnPacket("test");
        }

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

        public void StartSpeechRecognition()
        {
            print("!!!");
            var speech = SpeechClient.Create();
            var response = speech.Recognize(new RecognitionConfig()
            {
                Encoding = RecognitionConfig.Types.AudioEncoding.Linear16,
                SampleRateHertz = 8000,
                LanguageCode = "en",
            }, RecognitionAudio.FromFile("audio.raw"));
            print(response);
            foreach (var result in response.Results)
            {
                foreach (var alternative in result.Alternatives)
                {
                    print(alternative.Transcript);
                }
            }
        }

        async Task<object> StreamingMicRecognizeAsync(int seconds)
        {
            print(">>");

            String authJson = @"{
                  ""type"": ""service_account"",
                  ""project_id"": ""speechrecognitio-1573892551445"",
                  ""private_key_id"": ""b88a7d3dd18b3845061b81dc7688575e6051b2ce"",
                  ""private_key"": ""-----BEGIN PRIVATE KEY-----\nMIIEvgIBADANBgkqhkiG9w0BAQEFAASCBKgwggSkAgEAAoIBAQDcHGnLzLT4iQTX\nBsCGxi7m8lskngRxPh+KRNEsnlHBVP2RSeFeZbkVVYLP/HgFcHNhrugCMMrXFumN\nDE1+53n0HxOM2LCpAy2tSKdiMMA5xOS8prU9/brAMdqxo89nSizemExpr03ld56M\nUghGCuPmor6SzHoSOkmAYHMG1ozEgGza3imOtTYZRWA8oGFuKQSanZzgZLX6KT+6\ncRY0TUn7hNygmB1uslfEmzCccvRO25xeXFDRluYvUAqsQJvDuqYofPpcVvQzIIF2\nKap6M1xYVX4u3MICG49zuwOhYO8pModZWjrLfBg4fIaZaQtwja96Vr/CRAQmRqCL\nO33F/QyVAgMBAAECggEADcrkq5Xy68qqOE8pVp3/PQ7dZziqTpj19lQZnLzO+AO7\nX+n2lVO1JVZrvAdgqKFDRFEReLxV+Y8V/iCnOoHcF9AFXu4KeTdvGqH9hcmdl1Z0\nft3IvaRd720wUbFSGHGCyPACLx0tDxP6e2XTNDsPzNlQgne4WSwN2bLcLQbaC0tj\nG/sxSJFMeEKRT6SWcOZO/7CdNX9ojYtLQ8++s86UACapTVYslIGa+fyBHSU24PkR\nqqlT1MAzLpgM3wQ+XwJu1C7n4VRAVDFBY9TaQ7knzGyD55fSf3Br/NKyiZqt2lUU\nRfMTW9PRbB1h6TUvueXV9xFx15RayrtVCaH1BRGcgQKBgQDveqt+YiuROo+bMDIn\n2ksDSo8F7MXYErIlaI8PziBDP3oU7iI9ZFSM0wJqcaeflin9Me+Exf2JMrhYCDWR\noFL3Kt5NT9j5Cl/HHt5t3YI5lnk8XJ6ERUr7T2bdLHDfGrfRZIXDSh88bphy3igJ\nGBoPKDd/hi6lPfNoQb8MCo/mXwKBgQDrS7DYJ7jfdAxHkgwZprAhhUajNFSD/tSk\nWYIeHYj3MBLVvnZBHsKQChDEkXb3Pq53C32Dr+tSFyebQo+GR0LqFwdQ8M5Vupt5\n248tyAgwX4N3weLZNlDdH8GSaCUgCPoh/Fne+JqJV0OeSsUbVnFOug4SdOGwwGEy\nqHffrGJpiwKBgQC2z7EMmIpjog2wTRlsnNJ4n7kQr8/UA2mk7u2PBi5Qx6s9QRA4\nR1fX7NjCQyLPy4UgOLd8ZtwFmQdqhFHIalgLQNlUsWiTrFyzF5h6zAa2SW0hLB8C\nIBd+Qv3mRx+e4LmECjWmf/XaXx7XSUnMr25tNakwG1GOaP1gEBh0a7ewBwKBgCl+\nJohnsNVO3J9+ZL3dRDAVFZjQMJs6Q/tbgXOYF8AnbRreRHJFX2ARNlXDpSwClLeP\nginHywKl7KkXesHeLTGkr/iZDnnVt3csvboADVmibkefHEbbqjTkVblgvjNBAgMe\nQibsxiu0BMuUOeARRVfxvWuJywblVf6d8M2z04LzAoGBAK/4qD9XJQeJoM/Wnok/\nryRY1e3z8wEKFHWwX95pD/AUi4D6hr+hWpnonkYSIcZYPs6dX29wPf+zaWkC2kjl\nbipwd7+7EW4EBSXeKhCOtCNxHrnoOKjqyrkQwdVtD9ZUDKgSqZmVMG7LGKQGGlqw\nrFtSyj5BoOP8KNwhWmyCe/Ak\n-----END PRIVATE KEY-----\n"",
                  ""client_email"": ""starting-account-p42m0dijqnfd@speechrecognitio-1573892551445.iam.gserviceaccount.com"",
                  ""client_id"": ""108519999435165912271"",
                  ""auth_uri"": ""https://accounts.google.com/o/oauth2/auth"",
                  ""token_uri"": ""https://oauth2.googleapis.com/token"",
                  ""auth_provider_x509_cert_url"": ""https://www.googleapis.com/oauth2/v1/certs"",
                  ""client_x509_cert_url"": ""https://www.googleapis.com/robot/v1/metadata/x509/starting-account-p42m0dijqnfd%40speechrecognitio-1573892551445.iam.gserviceaccount.com""
            }";

            Google.Api.Gax.Expiration exp = Google.Api.Gax.Expiration.FromTimeout(new System.TimeSpan(0, 0, 30));
            Google.Api.Gax.Grpc.CallTiming timing = Google.Api.Gax.Grpc.CallTiming.FromExpiration(exp);
            Google.Api.Gax.Grpc.CallSettings setting = Google.Api.Gax.Grpc.CallSettings.FromCallTiming(timing);
            GoogleCredential cred = GoogleCredential.FromJson(authJson);

            Channel channel = new Channel(SpeechClient.DefaultEndpoint.Host, SpeechClient.DefaultEndpoint.Port, cred.ToChannelCredentials());

            var speech = SpeechClient.Create(channel);

            var streamingCall = speech.StreamingRecognize(setting);
            
            // Write the initial request with the config.
            await streamingCall.WriteAsync(
                new StreamingRecognizeRequest()
                {
                    StreamingConfig = new StreamingRecognitionConfig()
                    {
                        Config = new RecognitionConfig()
                        {
                            Encoding =
                            RecognitionConfig.Types.AudioEncoding.Linear16,
                            SampleRateHertz = 16000,
                            LanguageCode = "en",
                        },
                        InterimResults = true,
                    }
                });
            // Print responses as they arrive.
            Task printResponses = Task.Run(async () =>
            {
                while (await streamingCall.ResponseStream.MoveNext(
                    default(CancellationToken)))
                {
                    foreach (var result in streamingCall.ResponseStream
                        .Current.Results)
                    {
                        foreach (var alternative in result.Alternatives)
                        {
                            print(alternative.Transcript);
                            Dispatcher.Instance.Invoke(() => OnPacket(alternative.Transcript));
                        }
                    }
                }
            });
            // Read from the microphone and stream to API.
            object writeLock = new object();
            bool writeMore = true;
            var waveIn = new NAudio.Wave.WaveInEvent();
            waveIn.DeviceNumber = 0;
            waveIn.WaveFormat = new NAudio.Wave.WaveFormat(16000, 1);
            waveIn.DataAvailable +=
                (object sender, NAudio.Wave.WaveInEventArgs args) =>
                {
                    lock (writeLock)
                    {
                        if (!writeMore)
                        {
                            return;
                        }

                        streamingCall.WriteAsync(
                            new StreamingRecognizeRequest()
                            {
                                AudioContent = Google.Protobuf.ByteString
                                    .CopyFrom(args.Buffer, 0, args.BytesRecorded)
                            }).Wait();
                    }
                };
            waveIn.StartRecording();
            OnPacket("Speak now.");
            await Task.Delay(TimeSpan.FromSeconds(seconds));
            // Stop recording and shut down.
            waveIn.StopRecording();
            lock (writeLock)
            {
                writeMore = false;
            }

            await streamingCall.WriteCompleteAsync();
            await printResponses;
            return 0;
        }

        protected void Start()
        {
            Invoke("MSRec", 3);
            input.AddGlobalListener(gameObject);

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

            foreach (string name in button_names) {
                GameObject nextbutton = Instantiate(menubutton);
                nextbutton.transform.parent = menu.transform;
                nextbutton.transform.localPosition = new Vector3(0,yp,0);
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

    private void SpeechThreadFnc()
        {
            Task.Run(async () => await StreamingMicRecognizeAsync(30)).GetAwaiter().GetResult();
        }

        void Update()
        {

#if UNITY_EDITOR

            if ((Time.time - last_fake_message_time) > 1)
            {
                last_fake_message_time = Time.time;

                string next_packet = last_packet;

                int nextword = UnityEngine.Random.Range(2, 6);

                while(nextword > 0)
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
                buttons["AutoDistance"].GetComponent<TextMesh>().text = (CaptionDistance==0) ? "Automatic depth" : ("Fixed depth: "+CaptionDistance+"m");
                buttons["DepthDebug"].GetComponent<TextMesh>().text = DepthDebug ? "Showing depth debug" : "Not showing depth debug";
                buttons["ShowCursor"].GetComponent<TextMesh>().text = ShowCursor ? "Showing cursor" : "Not showing cursor";
                buttons["TextSize"].GetComponent<TextMesh>().text = "Text size: " + (TextSize ==0 ? "small" : (TextSize == 1 ? "medium" : "large"));
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

        }

        private void OnPacket(string message)
        {
            int overlap_length = message.Length;

            while(overlap_length > 0)
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
                            TextLines = (TextLines%5)+1;
                            break;
                        case "TextLineLength":
                            TextLineLength += 20;
                            if (TextLineLength > 80) {
                                TextLineLength = 40;
                            }
                            break;
                    }
                    
                    settings_set = false;

                    eventData.Use();
                    return;
                }
            }


            if (captions.Count > 1) {
                for (int i = captions.Count - 1; i >= 0; i--)
                {
                    GameObject o = captions[i];
                    if (o.GetComponent<GlassEarTagalong>().frozen && targeted == o) {
                        captions.RemoveAt(i);
                        Destroy(o);

                        eventData.Use();
                        return;
                    }
                }
            }

            foreach (GameObject o in captions) {
                if (!o.GetComponent<GlassEarTagalong>().frozen) {
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
