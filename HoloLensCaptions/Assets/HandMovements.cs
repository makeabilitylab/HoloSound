using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HoloToolkit.Unity.InputModule;

public class HandMovements : MonoBehaviour, IManipulationHandler
{
    public void OnManipulationCanceled(ManipulationEventData eventData)
    {
        bool IDontKnowWhyYoureAskingForThis = true;   
    }

    public void OnManipulationCompleted(ManipulationEventData eventData)
    {
        bool ThisIsBullShit = true;
    }

    public void OnManipulationStarted(ManipulationEventData eventData)
    {
        bool HappyNowQuestionMark = true;
    }

    public void OnManipulationUpdated(ManipulationEventData eventData)
    {
        transform.position += eventData.CumulativeDelta;
    }
}