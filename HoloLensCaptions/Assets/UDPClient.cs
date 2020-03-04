using UnityEngine;
using System.Collections;

using System;
using System.Text;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using HoloToolkit.Unity;


public class UDPClient : MonoBehaviour
{
    UdpClient client;
    IPEndPoint remoteEndPoint;
    public GameObject DOADisplay;
    public GameObject DOAIndicator;

    // Use this for initialization
    void Start()
    {
        String hostname = "attu2.cs.washington.edu";
        var addresses = System.Net.Dns.GetHostAddresses(hostname);
        int port = 8467;
        remoteEndPoint = new IPEndPoint(addresses[0], port);

        if (addresses.Length == 0)
        {
            throw new ArgumentException("Cannot find host");
        }

        client = new UdpClient();
        sendMessage("HoloCaption");
    }

    // Update is called once per frame
    void Update()
    {
        byte[] data = null;
        // only receives the newest packet.
        while (client.Available > 0)
        {
            data = client.Receive(ref remoteEndPoint);
        }
        if (data != null)
        {
            string content = Encoding.UTF8.GetString(data, 0, data.Length);
            print(content);
            DOADisplay.GetComponent<TextMesh>().text = content;
            Localization.instance.updateLocalization8Directions(content);
            // Localization.instance.setSoundSourceAngle(int.Parse(content));
            // client.Receive(ref remoteEndPoint);
        }
        
    }

    private void sendMessage(String message)
    {
        try
        {
            byte[] data = Encoding.UTF8.GetBytes(message);
            client.Send(data, data.Length, remoteEndPoint);
        }
        catch (Exception e)
        {
            print(e.ToString());
        }
    }
}
