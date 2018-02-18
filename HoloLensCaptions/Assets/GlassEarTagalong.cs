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
    public class GlassEarTagalong : SimpleTagalong, InputModule.IInputClickHandler
    {
        // These members allow for specifying target and minimum percentage in
        // the FOV.
        [Range(0.0f, 1.0f), Tooltip("The minimum horizontal percentage visible before the object starts tagging along.")]
        public float MinimumHorizontalOverlap = 0.1f;
        [Range(0.0f, 1.0f), Tooltip("The target horizontal percentage the Tagalong attempts to achieve.")]
        public float TargetHorizontalOverlap = 1.0f;
        [Range(0.0f, 1.0f), Tooltip("The minimum vertical percentage visible before the object starts tagging along.")]
        public float MinimumVerticalOverlap = 0.1f;
        [Range(0.0f, 1.0f), Tooltip("The target vertical percentage the Tagalong attempts to achieve.")]
        public float TargetVerticalOverlap = 1.0f;

        // These members control how many rays to cast when looking for
        // collisions with other holograms.
        [Range(3, 11), Tooltip("The number of rays to cast horizontally across the Tagalong.")]
        public int HorizontalRayCount = 3;
        [Range(3, 11), Tooltip("The number of rays to cast vertically across the Tagalong.")]
        public int VerticalRayCount = 3;

        [Tooltip("Don't allow the Tagalong to come closer than this distance.")]
        public float MinimumTagalongDistance = 1.0f;

        [Tooltip("The speed to update the Tagalong's distance when compensating for depth (meters/second).")]
        public float DepthUpdateSpeed = 4.0f;

        private bool frozen;

        public InputModule.InputManager input;

        protected override void Start()
        {
            base.Start();

            input.AddGlobalListener(gameObject);

            frozen = false;

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


        public void OnInputClicked(InputModule.InputClickedEventData eventData)
        {
            frozen = !frozen;
        }

        protected override void Update()
        {
            if (!frozen)
            {
                base.Update();
            }
            transform.localScale = new Vector3(1,1,1) * (transform.position - CameraCache.Main.transform.position).magnitude;
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
            Transform cameraTransform = CameraCache.Main.transform;
            Vector3 cameraPosition = cameraTransform.position;

            Vector3 normalizedWindowPos = cameraPosition + (transform.position - cameraPosition).normalized;

            Vector3 extents = tagalongCollider.size * 0.5F;

            // Determine if the Tagalong needs to move to the right or the left
            // to get back inside the camera's view frustum. The normals of the
            // planes that make up the camera's view frustum point inward.
            float moveRight = extents.x - frustumPlanes[frustumLeft].GetDistanceToPoint(normalizedWindowPos);
            float moveLeft = extents.x - frustumPlanes[frustumRight].GetDistanceToPoint(normalizedWindowPos);
            float moveUp = extents.y - frustumPlanes[frustumBottom].GetDistanceToPoint(normalizedWindowPos);
            Plane horizontalCenterPlane = new Plane(-cameraTransform.up, cameraPosition);
            float moveDown = extents.y - horizontalCenterPlane.GetDistanceToPoint(normalizedWindowPos);

            if (moveRight > 0) {
                normalizedWindowPos += cameraTransform.right.normalized * moveRight;
            }
            if (moveLeft > 0) {
                normalizedWindowPos -= cameraTransform.right.normalized * moveLeft;
            }
            if (moveUp > 0) {
                normalizedWindowPos += cameraTransform.up.normalized * moveUp;
            }
            if (moveDown > 0) {
                normalizedWindowPos -= cameraTransform.up.normalized * moveDown;
            }
            //normalizedWindowPos = cameraPosition + cameraTransform.forward;
            


            //Do the raycasts now

            float width = tagalongCollider.size.x;
            float height = tagalongCollider.size.y;

            // Find the lower-left corner of the Tagalong's BoxCollider.
            Vector3 lowerLeftCorner = normalizedWindowPos - (cameraTransform.right * (width / 2)) - (cameraTransform.up * (height / 2));

            // Cast a grid of rays across the Tagalong's collider. Keep track of
            // of the closest hit, ignoring collisions with ourselves and those
            // that are closer than MinimumColliderDistance.
            RaycastHit closestHit = new RaycastHit();
            float closestHitDistance = float.PositiveInfinity;
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
                        if (allHits[h].distance < closestHitDistance &&
                            !allHits[h].transform.IsChildOf(transform))
                        {
                            closestHit = allHits[h];
                            closestHitDistance = closestHit.distance;
                        }
                    }
                }
            }

            if (closestHitDistance < TagalongDistance)
            {
                // The closestHitDistance is a straight-line from the camera to the
                // point on the collider that was hit. Unless the closest hit was
                // encountered on the center Raycast, using the distance found will
                // actually push the tagalong too far away, and part of the object
                // that was hit will show through the Tagalong. We can fix that
                // with a little thing we like to call Trigonometry.
                Vector3 cameraToTransformPosition = normalizedWindowPos - cameraPosition;
                Vector3 cameraToClosestHitPoint = closestHit.point - cameraPosition;
                float angleBetween = Vector3.Angle(cameraToTransformPosition, cameraToClosestHitPoint);
                closestHitDistance = closestHitDistance * Mathf.Cos(angleBetween * Mathf.Deg2Rad);
                closestHitDistance = Mathf.Max(closestHitDistance, MinimumTagalongDistance);
            } else {
                closestHitDistance = TagalongDistance;
            }

            // Now recalculate the distance
            transform.position = cameraPosition + ((normalizedWindowPos - cameraPosition) * closestHitDistance);

            // don't use the interpolator
            toPosition = new Vector3(0,0,0);
            return false;
        }

    }
}