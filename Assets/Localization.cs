using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class Localization : MonoBehaviour
{
    public static Localization instance;

    public GameObject indicatorPrefeb; // indicator is used for 3D
    public GameObject[] TwelveDir; // used for 12-dir display. Make sure to et size = 12 in the editor.
    public float fadeDuration = 1; // how long does it take to let one indicator fade out.

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

                float x = Mathf.Sin(j * (Mathf.PI / phiDivision)) * Mathf.Cos(i * (2 * Mathf.PI / thetaDivision));
                float y = Mathf.Sin(j * (Mathf.PI / phiDivision)) * Mathf.Sin(i * (2 * Mathf.PI / thetaDivision));
                float z = Mathf.Cos(j * (Mathf.PI / phiDivision));

                Vector3 dir = new Vector3(x, z, y); // Note that 'y' is up in Unity while 'z' is up in ODAS

                mapSourceDirectionToIndicators(dir, activity);

                directionActivity[i, j] = Mathf.Max(0, directionActivity[i, j] - Time.deltaTime / fadeDuration);
            }
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
                Vector2 xy = (new Vector2(x, y)).normalized;

                float signedTheta = Vector2.SignedAngle(xy, new Vector2(1, 0)) / 180.0f * Mathf.PI;
                float unsignedTheta = signedTheta < 0 ? signedTheta + 2 * Mathf.PI : signedTheta; // ranges from 0 to 2pi
                int tIndexFloored = Mathf.FloorToInt(unsignedTheta / (2 * Mathf.PI / thetaDivision));

                Vector3 xyz = new Vector3(x, y, z);
                float phi = Vector3.Angle(new Vector3(0, 0, 1), xyz) / 180.0f * Mathf.PI; // phi is always unsigned
                int pIndexFloored = Mathf.FloorToInt(phi / (Mathf.PI / phiDivision));

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
        if (activity == 0)
        {
            return;
        }
        Vector3 forward = Camera.main.transform.forward;
        Vector3 up = Camera.main.transform.up;

        int angle = Mathf.RoundToInt(Vector3.SignedAngle(dir, forward, up));

        int index = (int)(((angle + 360) % 360) / (360 / TwelveDir.Length));
        TwelveDir[index].SetActive(true);

        Color c = TwelveDir[index].GetComponent<SpriteRenderer>().color;
        c.a = Mathf.Max(c.a, activity);
        TwelveDir[index].GetComponent<SpriteRenderer>().color = c;
    }
}
