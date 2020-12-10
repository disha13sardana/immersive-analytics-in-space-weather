using System.Collections.Generic;
using CodeControl;
using UnityEngine;

namespace Scenes
{
    public class LeftSlidingBarHandleModel : Model
    {
        public const string PrefabName = "LeftSlidingBarHandle";
        public int SerialId = 0;
        public Vector3 CenterPosition = new Vector3();
        public Vector3 Scale = new Vector3(1f, 1f, 1f);
        public Vector3 Rotation = Vector3.zero;
        public StormIndexDataSet StormIndexDataSet;
        public string Label = "";

        public readonly Dictionary<int, Vector3> RegionIdToLocationMap = new Dictionary<int, Vector3>
        {
            {1, new Vector3(0.5f, 0f, 0.5f)}
        };
    }
}