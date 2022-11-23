using System;

using Niantic.ARDK.AR.WayspotAnchors;
using Niantic.ARDK.Extensions;

using UnityEngine;

namespace Niantic.ARDKExamples.WayspotAnchors
{
    public class BlackAdam : WayspotAnchorTracker
    {
        private readonly Color _pendingColor = Color.yellow;
        private readonly Color _limitedColor = Color.green;
        private readonly Color _successColor = Color.green;
        private readonly Color _failedColor = Color.red;
        private readonly Color _invalidColor = Color.red;

        private Renderer _renderer;

        private void Awake()
        {
            name = "Anchor (Pending)";
        }

        protected override void OnAnchorAttached()
        {
            base.OnAnchorAttached();

            name = $"Anchor {WayspotAnchor.ID}";
        }

        protected override void OnStatusCodeUpdated(WayspotAnchorStatusUpdate args)
        {
            Debug.Log($"Anchor {WayspotAnchor.ID.ToString().Substring(0, 8)} status updated to {args.Code}");

            if (args.Code == WayspotAnchorStatusCode.Success || args.Code == WayspotAnchorStatusCode.Limited)
            {
                gameObject.SetActive(true);
            }
        }
    }
}
