using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Localization : MonoBehaviour {
    public static Localization instance;

    public GameObject arrow;

    private Vector3 soundSourceLocaltion;

    public void Awake()
    {
        instance = this;
    }

    public void setSoundSourceAngle(int angle)
    {
        angle = -angle;
        Transform cam = Camera.main.transform;
        soundSourceLocaltion = cam.position + Quaternion.AngleAxis(angle, cam.up) * cam.forward * 3;
    }

    public void Update()
    {
        Transform cam = Camera.main.transform;
        Vector3 originToSoundSource = soundSourceLocaltion - cam.position;
        float angle = Vector3.SignedAngle(cam.forward, originToSoundSource, cam.up);
        Debug.DrawRay(cam.position, cam.forward, Color.red, 0.1f);
        Debug.DrawRay(cam.position, originToSoundSource, Color.blue, 0.1f);
        arrow.GetComponent<RectTransform>().localEulerAngles = new Vector3(0, 0, -angle);
       
    }


}
