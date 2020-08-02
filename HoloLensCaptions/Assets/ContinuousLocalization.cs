using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;


public class ContinuousLocalization : MonoBehaviour {

    public static ContinuousLocalization instance;
    public GameObject indicatorPrefeb; // indicator is used for 3D
    
    public GameObject indicatorRoot;

    private List<GameObject> indicators = new List<GameObject>();
    private Dictionary<Vector3, float> memo = new Dictionary<Vector3, float>();

    // Use this for initialization
    void Start () {
        instance = this;
    }
	
	// Update is called once per frame
	void Update () {
        print(memo.Count);
        clearIndicators();
        // Check reach potentially active, and map then to one of 12 directions.
        // Right now we only take the maximum.
        List<Vector3> removal = new List<Vector3>();
        foreach (Vector3 d in new List<Vector3>(memo.Keys)) {
            float activity = memo[d];
      
            mapSourceDirectionToIndicators(d, activity);

            if (activity - Time.deltaTime < 0)
            {
                memo.Remove(d);
                continue;
            }
            memo[d] = activity - Time.deltaTime;
        }
    }

    /*
    * Used by other classes to update the visual of sound source indicators.
    * 
    */
    public void updateLocalization12Directions(string jsonMessage)
    {
        print(jsonMessage);
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
            print("(" + x + "," + y + "," + z);
            float activity = float.Parse(obj["activity"].ToString()); // activity is the probablity that the sound source exists
            if (activity > 0.0f)
            {
                Debug.DrawRay(transform.position, new Vector3(x, y, z), Color.green);
                Vector3 next = Camera.main.transform.position +
                    x * Camera.main.transform.right +
                    z * Camera.main.transform.up + 
                    y * Camera.main.transform.forward;
                memo[next] = 1.5f;
            }
        }
    }

    private void mapSourceDirectionToIndicators(Vector3 dir, float activity)
    {

        Vector3 forward = Camera.main.transform.forward;
        Vector3 up = Camera.main.transform.up;
        /*
        print("forward : " + Camera.main.transform.forward + " up: " + Camera.main.transform.up);

        Vector3 forward = new Vector3(0, 1, 0);
        Vector3 up = new Vector3(0, 0, 1);*/

        float angle = Vector3.SignedAngle(dir, forward, up);
        Debug.DrawRay(Camera.main.transform.position, dir, Color.white, 0.1f, false);
        foreach (GameObject go in indicators)
        {
            float diff = Mathf.Abs(go.transform.localEulerAngles.z - angle);
            if (diff > 180)
            {
                diff -= 360;
            }

            if (Mathf.Abs(diff) < 30)
            {
                return;
            }
            print(diff);
        }

        GameObject indicator = Instantiate(indicatorPrefeb, new Vector3(0, 0, 0), Quaternion.identity);
        indicator.transform.parent = indicatorRoot.transform;
        indicator.transform.localPosition = new Vector3(0, 0, 0);
        indicator.transform.localScale = new Vector3(1, 1, 1);
        indicator.transform.localEulerAngles = new Vector3(0, 0, angle + 105);
        indicators.Add(indicator);

        Color c = indicator.GetComponent<SpriteRenderer>().color;
        c.a = activity;
        indicator.GetComponent<SpriteRenderer>().color = c;
    }

    /*
     * This is method work works with updateLocalization3D()
     */
    private void clearIndicators()
    {
        // set opacity to 0
        List<GameObject> toKill = new List<GameObject>(indicators);
        indicators.Clear();
        foreach (GameObject go in toKill)
        {
            Destroy(go);
        }
    }
}
