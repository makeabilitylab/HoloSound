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
        String hostname = "attu1.cs.washington.edu";
        var addresses = System.Net.Dns.GetHostAddresses(hostname);
        int port = 8924;
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
        if (client.Available > 0)
        {
            // receive data only if there is something available.
            byte[] data = client.Receive(ref remoteEndPoint);
            string content = Encoding.UTF8.GetString(data, 0, data.Length);
            print(content);
            DOADisplay.GetComponent<TextMesh>().text = content;
            Localization.instance.setSoundSourceAngle(int.Parse(content));
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
