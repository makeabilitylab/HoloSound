using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HighightControl : MonoBehaviour {

    public float HoverTime = -1;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update ()
    {
        Transform highlight = gameObject.transform.Find("Highlight");

        if (highlight != null)
        {
            highlight.gameObject.GetComponent<MeshRenderer>().enabled = (Time.time - HoverTime) < 0.1;
        }

    }
}
