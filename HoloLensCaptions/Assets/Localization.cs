using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class Localization : MonoBehaviour
{
    public static Localization instance;

    public GameObject arrow; // arrow is used for 2D
    public GameObject indicatorPrefeb; // indicator is used for 3D
    public GameObject[] TwelveDir; // used for 12-dir display. Make sure to et size = 12 in the editor.
    public float fadeDuration = 1; // how long does it take to let one indicator fade out.
    public long packetCount = 0;
    private Vector3 soundSourceLocaltion;

    private Dictionary<GameObject, float> alphaTable = new Dictionary<GameObject, float>();
    private const int thetaDivision = 12;
    private const int phiDivision = 6;
    private float[,] directionActivity = new float[thetaDivision, phiDivision];

    private List<GameObject> indicators;

    public void Awake()
    {
        instance = this;
        indicators = new List<GameObject>();
    }


    public void setSoundSourceAngle(int angle)
    {
        angle = -angle;
        Transform cam = Camera.main.transform;
        soundSourceLocaltion = cam.position + Quaternion.AngleAxis(angle, cam.up) * cam.forward * 3;
    }

    public void Update()
    {
        clearIndicators();
        // Check reach potentially active, and map then to one of 12 directions.
        // Right now we only take the maximum.
        for (int i = 0; i < directionActivity.GetLength(0); i++)
        {
            for (int j = 0; j < directionActivity.GetLength(1); j++)
            {
                float activity = directionActivity[i, j];

                float x = Mathf.Sin(j * phiDivision) * Mathf.Cos(i * thetaDivision);
                float y = Mathf.Sin(j * phiDivision) * Mathf.Sin(i * thetaDivision);
                float z = Mathf.Cos(j * phiDivision);

                Vector3 dir = new Vector3(x, y, z);

                mapSourceDirectionToIndicators(dir, activity);

                directionActivity[i, j] = Mathf.Max(0, directionActivity[i, j] - Time.deltaTime / fadeDuration);
            }
        }

    }

    /*
     * Used by other classes to update the visual of sound source indicators.
     * 
     */
    public void updateLocalization2D()
    {
        Transform cam = Camera.main.transform;
        Vector3 originToSoundSource = soundSourceLocaltion - cam.position;
        float angle = Vector3.SignedAngle(cam.forward, originToSoundSource, cam.up);
        Debug.DrawRay(cam.position, cam.forward, Color.red, 0.1f);
        Debug.DrawRay(cam.position, originToSoundSource, Color.blue, 0.1f);
        arrow.GetComponent<RectTransform>().localEulerAngles = new Vector3(0, 0, -angle);
    }

    /*
    * Used by other classes to update the visual of sound source indicators.
    * 
    */
    public void updateLocalization3D(string jsonMessage)
    {
        packetCount++;
        print(packetCount / Time.time);
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
                //clearIndicators();
            }
        }
        if (temp.Count > 0.5f)
        {
            indicators = temp;
        }
    }

    /*
    * Used by other classes to update the visual of sound source indicators.
    * 
    */
    public void updateLocalization12Directions(string jsonMessage)
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

        foreach (JObject obj in points.Children())
        {
            float x = float.Parse(obj["x"].ToString());
            float y = float.Parse(obj["y"].ToString());
            float z = float.Parse(obj["z"].ToString());
            float activity = float.Parse(obj["activity"].ToString()); // activity is the probablity that the sound source exists
            if (activity > 0.0f)
            {
                Vector2 xy = new Vector2(x, y);
                float signedTheta = Vector2.SignedAngle(xy, new Vector2(1, 0)) / 180 * Mathf.PI; // ranges from -pi to pi
                float unsignedTheta = signedTheta < 0 ? signedTheta + 2 * Mathf.PI : signedTheta; // ranges from 0 to 360

                print(unsignedTheta);
                int tIndexFloored = Mathf.FloorToInt(unsignedTheta / (2 * Mathf.PI / thetaDivision));
                //int tIndex = tIndexFloored + Mathf.RoundToInt((unsignedTheta - tIndexFloored * (2 * Mathf.PI / thetaDivision)) / (2 * Mathf.PI / thetaDivision));

                Vector3 xyz = new Vector3(x, y, z);
                float phi = Vector3.Angle(new Vector3(0, 0, 1), xyz) / 180 * Mathf.PI; // phi is always unsigned
                // print(phi * 180 / Mathf.PI);
                int pIndexFloored = Mathf.FloorToInt(phi / (Mathf.PI / phiDivision));
                //int pIndex = pIndexFloored + Mathf.RoundToInt((phi - pIndexFloored * (Mathf.PI / pIndexFloored)) / (Mathf.PI / phiDivision));

                print("tINdex: " + tIndexFloored + " pIndex:" + pIndexFloored);
                pIndexFloored = 3;
                directionActivity[tIndexFloored, pIndexFloored] = 1; // set activitiy on the direction to 1, fully active.
            }
        }
    }

    /*
     * This is method work works with updateLocalization3D()
     */
    private void clearIndicators()
    {
        // set opacity to 0
        foreach (GameObject go in TwelveDir)
        {
            Color c = go.GetComponent<SpriteRenderer>().color;
            c.a = 0;
            go.GetComponent<SpriteRenderer>().color = c;
        }
    }

    /*
     * updateLocalization12Directions() will map incoming sound source
     * directions (which is continuous) to a set of discrete vectors
     * spanning 360 degree. This function will then map each of the vectors
     * to the (12) visual indicators.
     * Note that activity ranges from 0 to 1.
     */
    private void mapSourceDirectionToIndicators(Vector3 dir, float activity)
    {
        float y = dir.y;
        float z = dir.z;
        dir.z = y;
        dir.y = z;

        Vector3 forward = Camera.main.transform.forward;
        Vector3 up = Camera.main.transform.up;
        /*
        print("forward : " + Camera.main.transform.forward + " up: " + Camera.main.transform.up);

        Vector3 forward = new Vector3(0, 1, 0);
        Vector3 up = new Vector3(0, 0, 1);*/

        float angle = Vector3.SignedAngle(dir, forward, up);
        int index = (int)(((angle + 360) % 360) / (360 / TwelveDir.Length));
        TwelveDir[index].SetActive(true);

        Color c = TwelveDir[index].GetComponent<SpriteRenderer>().color;
        c.a = Mathf.Max(c.a, activity);
        TwelveDir[index].GetComponent<SpriteRenderer>().color = c;
    }
}
