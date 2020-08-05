using HoloToolkit.Unity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TranslateToCamera : MonoBehaviour {

    public bool EnableMovement;
    private Vector3 lastCamera = new Vector3(0,0,0);

    public bool EnableYaw;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        if (EnableMovement)
        {
            transform.position += (CameraCache.Main.transform.position - lastCamera);
        }

        if (EnableYaw)
        {
                Vector3 directionToTarget = CameraCache.Main.transform.forward;

                directionToTarget.y = 0.0f;

                if (directionToTarget.sqrMagnitude > 0.001f)
                {
                    transform.rotation = Quaternion.LookRotation(directionToTarget);
                }
        }

        lastCamera = CameraCache.Main.transform.position;
    }
}
