using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class Localization : MonoBehaviour {
    public static Localization instance;

    public GameObject arrow; // arrow is used for 2D
    public GameObject indicatorPrefeb; // indicator is used for 3D
    public GameObject[] EightDir;
    public long packetCount = 0;
    private Vector3 soundSourceLocaltion;

    private List<GameObject> indicators;

    public void Awake()
    {
        instance = this;
        indicators = new List<GameObject>(); // up to four indicates
    }


    public void setSoundSourceAngle(int angle)
    {
        angle = -angle;
        Transform cam = Camera.main.transform;
        soundSourceLocaltion = cam.position + Quaternion.AngleAxis(angle, cam.up) * cam.forward * 3;
    }

    public void Update()
    {
        
       
    }

    public void updateLocalization2D()
    {
        Transform cam = Camera.main.transform;
        Vector3 originToSoundSource = soundSourceLocaltion - cam.position;
        float angle = Vector3.SignedAngle(cam.forward, originToSoundSource, cam.up);
        Debug.DrawRay(cam.position, cam.forward, Color.red, 0.1f);
        Debug.DrawRay(cam.position, originToSoundSource, Color.blue, 0.1f);
        arrow.GetComponent<RectTransform>().localEulerAngles = new Vector3(0, 0, -angle);
    }

    public void updateLocalization3D(string jsonMessage)
    {
        packetCount++;
        print(packetCount / Time.time);
        JObject o;
        try
        {
            o = JObject.Parse(jsonMessage);
        } catch (JsonReaderException e)
        {
            return;
        }
        
        JArray points = (JArray)o["src"];
        List<GameObject> temp = new List<GameObject>();
        foreach (JObject obj in points.Children())
        {
            float x = float.Parse(obj["x"].ToString());
            float y = float.Parse(obj["y"].ToString());
            float z = float.Parse(obj["z"].ToString());
            float activity = float.Parse(obj["activity"].ToString()); // activity is the probablity that the sound source exists
            if (activity > 0.0f)
            {
                
                // we've found a source
                Vector3 pos = Camera.main.transform.position + 10 * x * new Vector3(1, 0, 0)
                    + 10 * y * new Vector3(0, 0, 1)
                    + 10 * z * new Vector3(0, 1, 0);
                GameObject go = Instantiate(indicatorPrefeb, pos, Quaternion.identity);
                temp.Add(go);
                clearIndicators();
            }
        }
        if (temp.Count > 0.5f)
        {
            indicators = temp;
        }
    }

    public void updateLocalization8Directions(string jsonMessage)
    {
        JObject o;
        try
        {
            o = JObject.Parse(jsonMessage);
        }
        catch (JsonReaderException e)
        {
            return;
        }

        JArray points = (JArray)o["src"];
        List<GameObject> temp = new List<GameObject>();

        foreach(GameObject obj in EightDir)
        {
            obj.SetActive(false);
        }


        foreach (JObject obj in points.Children())
        {
            float x = float.Parse(obj["x"].ToString());
            float y = float.Parse(obj["y"].ToString());
            float z = float.Parse(obj["z"].ToString());
            float activity = float.Parse(obj["activity"].ToString()); // activity is the probablity that the sound source exists
            if (activity > 0.0f)
            {

                // we've found a source
                Vector3 pos = new Vector3(x, y, 0);
                print(pos);
                Vector3 forward = new Vector3(0, 1, 0);
                Vector3 up = new Vector3(0, 0, 1);

                float angle = Vector3.SignedAngle(pos, forward, up);
                int index = (int)(((angle + 360) % 360) / 45);
                EightDir[index].SetActive(true);                
            }
        }
    }

    private void clearIndicators()
    {
        // First clear all the existing indicators
        foreach (GameObject go in indicators)
        {
            Destroy(go);
            
        }
        indicators.Clear();
    }
}
