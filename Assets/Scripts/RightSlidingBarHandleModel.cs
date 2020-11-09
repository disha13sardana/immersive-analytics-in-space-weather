using System.Collections.Generic;
using CodeControl;
using UnityEngine;

namespace Scenes
{
    public class RightSlidingBarHandleModel: Model
    {
        public const string PrefabName = "RightSlidingBarHandle";
        public int SerialId = 0;
        public Vector3 CenterPosition = new Vector3();
        public Vector3 Scale = new Vector3(10f, 0.1f, 10f);
        public Vector3 Rotation = Vector3.zero;
        public List<Dictionary<string, object>> PointList = new List<Dictionary<string, object>>();
        public StormIndexData StormIndexData;
        public string Label;

        public readonly Dictionary<int, Vector3> RegionIdToLocationMap = new Dictionary<int, Vector3>
        {
            {1, new Vector3(0.5f, 0f, 0.5f)}
        };

        // 995 X 823
    }
}