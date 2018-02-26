// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using UnityEngine;

namespace HoloToolkit.Unity
{
    /// <summary>
    /// A Tagalong that extends SimpleTagalong that allows for specifying the
    /// minimum and target percentage of the object to keep in the view frustum
    /// of the camera and that keeps the Tagalong object in front of other
    /// holograms including the Spatial Mapping Mesh.
    /// </summary>
    public class GlassEarTagalong : SimpleTagalong
    {

        private string line1 = null;
        private string line2 = null;
        private string line3 = null;
        private string line4 = null;
        // These members allow for specifying target and minimum percentage in
        // the FOV.
        [Range(0.0f, 0.1f), Tooltip("Deadzone of movement, no units.")]
        public float MaxRadialDistance = 0.02f;

        [Range(0.0f, 0.1f), Tooltip("Radial size to look at frozen one.")]
        public float FrozenTargetingRadialDistance = 0.04f;

        // These members control how many rays to cast when looking for
        // collisions with other holograms.
        [Range(3, 11), Tooltip("The number of rays to cast horizontally across the Tagalong.")]
        public int HorizontalRayCount = 3;
        [Range(3, 11), Tooltip("The number of rays to cast vertically across the Tagalong.")]
        public int VerticalRayCount = 3;

        [Tooltip("Don't allow the Tagalong to come closer than this distance.")]
        public float MinimumTagalongDistance = 1.0f;

        public bool frozen = false;

        public InputModule.InputManager input;

        protected override void Start()
        {
            base.Start();

            // If the specified minimum distance for the tagalong would be within the
            // camera's near clipping plane, adjust it to be 10% beyond the near
            // clipping plane.
            if (CameraCache.Main.nearClipPlane > MinimumTagalongDistance)
            {
                MinimumTagalongDistance = CameraCache.Main.nearClipPlane * 1.1f;
            }

            // The EnforceDistance functionality of the SimmpleTagalong has a
            // detrimental effect on this Tagalong's desired behavior.
            // Disable that behavior here.
            EnforceDistance = false;
        }

        protected override void Update()
        {
            base.Update();
            transform.localScale = new Vector3(1,1,1) * (transform.position - CameraCache.Main.transform.position).magnitude;

            /*
            bool targeted = IsTargeted();            

            foreach (Transform child in transform)
            {
                if (child.name == "Quad")
                {
                    child.gameObject.SetActive(targeted);
                }
            }
            */
        }

        /*
        public bool IsTargeted() {
            if (!frozen) {
                return false;
            }

            Transform cameraTransform = CameraCache.Main.transform;
            Vector3 cameraPosition = cameraTransform.position;

            Vector3 normalizedWindowPos = cameraPosition + (transform.position - cameraPosition).normalized;
            Vector3 normalizedTargetPos = cameraPosition + cameraTransform.forward;

            Vector3 offset = normalizedWindowPos - normalizedTargetPos; 

            return offset.magnitude < FrozenTargetingRadialDistance; 
        }
        */

        public void SetMessage(string message) {
            TextMesh captionDisplay = GetComponent<TextMesh>();
     
            //Multi Line text without scroll

            if (message.Length > 180)
                message = message.Substring(message.Length - 180);
            string textToDisplay = " ";
            string[] words = message.Split(' ');
            int count = 0;
            foreach (var word in words)
            {
                if (count <= 60)
                {
                    count = count + word.Length + 1;
                    textToDisplay = textToDisplay + word + " ";
                }
                else
                {
                    textToDisplay = textToDisplay + "\n" + word + " ";
                    count = word.Length + 1;
                }
            }
            captionDisplay.text = textToDisplay;
            /*
             * Single Line Text
            if (message.Length > 60) 
                captionDisplay.text = message.Substring(message.Length - 60);
            else
                captionDisplay.text = message;
             */
        }

        /// <summary>
        /// Determines if the Tagalong needs to move based on the provided
        /// position.
        /// </summary>
        /// <param name="fromPosition">Where the Tagalong is.</param>
        /// <param name="toPosition">Where the Tagalong needs to go.</param>
        /// <returns>True if the Tagalong needs to move to satisfy requirements; false otherwise.</returns>
        protected override bool CalculateTagalongTargetPosition(Vector3 fromPosition, out Vector3 toPosition)
        {

            bool moveWithMe = CaptionController.Instance.MoveWithMe;
            int captionDistance = CaptionController.Instance.CaptionDistance;

            if (frozen && !moveWithMe)
            {
                // don't use the interpolator
                toPosition = new Vector3(0, 0, 0);
                return false;
            }

            Transform cameraTransform = CameraCache.Main.transform;
            Vector3 cameraPosition = cameraTransform.position;

            Vector3 normalizedWindowPos = cameraPosition + (transform.position - cameraPosition).normalized;
            Vector3 normalizedTargetPos = cameraPosition + (cameraTransform.forward + (frustumPlanes[frustumBottom].normal * (-0.5F * frustumPlanes[frustumBottom].GetDistanceToPoint(cameraPosition + cameraTransform.forward)))).normalized;

            if (!frozen) {
                Vector3 offset = normalizedWindowPos - normalizedTargetPos; 

                if (offset.magnitude > MaxRadialDistance)
                {
                    //note: might still land outside the radius leading to repeated small movements. would be better to do this with a plane on camera.forward
                    normalizedWindowPos = cameraPosition + ((normalizedTargetPos + (offset * (MaxRadialDistance / offset.magnitude)))-cameraPosition).normalized;
                }
            }

            float TargetDistance = 8;

            if (captionDistance == 0) {

                //Do the raycasts now
                float width = tagalongCollider.size.x;
                float height = tagalongCollider.size.y;

                // Find the lower-left corner of the Tagalong's BoxCollider.
                Vector3 lowerLeftCorner = normalizedWindowPos - (cameraTransform.right * (width / 2)) - (cameraTransform.up * (height / 2));
                RaycastHit[] allHits;
                for (int x = 0; x < HorizontalRayCount; x++)
                {
                    Vector3 xCoord = lowerLeftCorner + cameraTransform.right * (x * width / (HorizontalRayCount - 1));
                    for (int y = 0; y < VerticalRayCount; y++)
                    {
                        Vector3 targetCoord = xCoord + cameraTransform.up * (y * height / (VerticalRayCount - 1));

                        allHits = Physics.RaycastAll(cameraPosition, targetCoord - cameraPosition, TagalongDistance);
                        for (int h = 0; h < allHits.Length; h++)
                        {
                            if (!allHits[h].transform.IsChildOf(transform))
                            {
                                float angleBetween = Vector3.Angle(normalizedWindowPos - cameraPosition, allHits[h].point - cameraPosition);
                                float dist = allHits[h].distance * Mathf.Cos(angleBetween * Mathf.Deg2Rad);

                                TargetDistance = Mathf.Max(MinimumTagalongDistance, Mathf.Min(TargetDistance, dist));
                            }
                        }
                    }
                }
            } else {
                TargetDistance = captionDistance;
            }

            // Now recalculate the distance
            transform.position = cameraPosition + ((normalizedWindowPos - cameraPosition) * TargetDistance);

            // don't use the interpolator
            toPosition = new Vector3(0,0,0);
            return false;
        }

    }
}