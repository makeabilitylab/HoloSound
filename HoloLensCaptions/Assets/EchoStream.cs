using System;
using Microsoft.CognitiveServices.Speech.Audio;
using Microsoft.CognitiveServices.Speech;
using UnityEngine;
using System.Threading;
using System.IO;
using System.Collections.Concurrent;
using System.Linq;

public class EchoStream : MemoryStream
{
    private readonly ManualResetEvent _DataReady = new ManualResetEvent(false);
    private readonly ConcurrentQueue<byte[]> _Buffers = new ConcurrentQueue<byte[]>();
    private int wc = 0;
    private int rc = 0;

    public bool DataAvailable { get { return !_Buffers.IsEmpty; } }

    public override void Write(byte[] buffer, int offset, int count)
    {
        _Buffers.Enqueue(buffer.Take(count).ToArray()); // add new data to buffer
        _DataReady.Set(); // allow waiting reader to proceed
        wc++;
        // UnityEngine.Debug.Log("wc " + wc);
    }

    public override int Read(byte[] buffer, int offset, int count)
    {
        _DataReady.WaitOne(); // block until there's something new to read

        byte[] lBuffer;

        if (!_Buffers.TryDequeue(out lBuffer)) // try to read
        {
            _DataReady.Reset();
            return -1;
        }

        if (!DataAvailable)
            _DataReady.Reset();

        Array.Copy(lBuffer, buffer, lBuffer.Length);
        rc++;
        // UnityEngine.Debug.Log("rc " + rc);
        return lBuffer.Length;
    }
}