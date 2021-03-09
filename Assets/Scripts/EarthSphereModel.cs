using System.Collections.Generic;
using CodeControl;
using UnityEngine;

namespace Scenes
{
    public class EarthSphereModel : Model
    {
        public const string PrefabName = "EarthSpherePrefab";
        public int SerialId = 0;
        public Vector3 CenterPosition = new Vector3();
        public Vector3 Scale = new Vector3(10f, 0.1f, 10f);
        public Vector3 Rotation = Vector3.zero;
        public Vector3 DataSphereScale = new Vector3(1f, 1f, 1f);
        public Vector3 MaxSphereScale = Vector3.one;
        public Vector3 MinSphereScale = Vector3.zero;
        public int ScaleDataColumnIndex = 0;
        public int ColorDataColumnIndex = 1;
        public int AmbientAudioDataColumnIndex = 1;
        public float SlicingPlanePosition = 0.5f;
        public List<Dictionary<string, object>> PointList = new List<Dictionary<string, object>>();
        // public Mc1Data Mc1Data;
        public string PlotName = "EarthSpherePlot";
        public bool visibility = true;
        public Color minColor = Color.yellow;
        public Color maxColor = Color.red;
        public Color minBrushColor = new Color(153, 51, 255);
        public Color maxBrushColor = new Color(102, 0, 204);

        public readonly Dictionary<int, Vector3> RegionIdToLocationMap = new Dictionary<int, Vector3>
        {
            {1, new Vector3(0f, 0f, 0f)},
        };
    }
}