using System;
using UnityEngine;

namespace HoloToolkit.Unity.InputModule.Tests
{
    public class TapToDelete : MonoBehaviour, IInputClickHandler
    {
        public void OnInputClicked(InputClickedEventData eventData)
        {
            Destroy(gameObject);
            eventData.Use();
        }
    }
}