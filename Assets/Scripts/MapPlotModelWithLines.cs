using System.Collections.Generic;
using CodeControl;
using UnityEngine;

namespace Scenes
{
    public class MapPlotModelWithLines : Model
    {
        public const string PrefabName = "MapPlotPrefabWithLines";
        public int SerialId = 0;
        public Vector3 CenterPosition = new Vector3();
        public Vector3 Scale = new Vector3(10f, 0.1f, 10f);
        public Vector3 Rotation = Vector3.zero;
        public Mc1Data Mc1Data;
        public string Label = "";

        public readonly Dictionary<int, Vector3> RegionIdToLocationMap = new Dictionary<int, Vector3>
        {
            {1, new Vector3(0.152763819f, 0f, 0.291616039f)},
            {2, new Vector3(0.301507538f, 0f, 0.236938032f)},
            {3, new Vector3(0.502512563f, 0f, 0.206561361f)},
            {4, new Vector3(0.683417085f, 0f, 0.340218712f)},
            {5, new Vector3(0.310552764f, 0f, 0.534629405f)},
            {6, new Vector3(0.301507538f, 0f, 0.383961118f)},
            {7, new Vector3(0.973869347f, 0f, 0.596597813f)},
            {8, new Vector3(0.834170854f, 0f, 0.837181045f)},
            {9, new Vector3(0.594974874f, 0f, 0.801944107f)},
            {10, new Vector3(0.763819095f, 0f, 0.770352369f)},
            {11, new Vector3(0.870351759f, 0f, 0.722964763f)},
            {12, new Vector3(0.864321608f, 0f, 0.575941677f)},
            {13, new Vector3(0.715577889f, 0f, 0.57472661f)},
            {14, new Vector3(0.484422111f, 0f, 0.358444714f)},
            {15, new Vector3(0.383919598f, 0f, 0.357229648f)},
            {16, new Vector3(0.394974874f, 0f, 0.493317132f)},
            {17, new Vector3(0.588944724f, 0f, 0.64763062f)},
            {18, new Vector3(0.592964824f, 0f, 0.516403402f)},
            {19, new Vector3(0.479396985f, 0f, 0.52855407f)}
        };
    }
}