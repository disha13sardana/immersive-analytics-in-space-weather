    using System.Collections;
using System.Collections.Generic;
using CodeControl;
using Scenes;
using UnityEngine;

namespace Scenes
{
public class SlicingPlaneModel : Model
{
    public const string PrefabName = "SlicingPlanePrefab";
    public int ParentSerialId;
    public int SerialId;
    public StormIndexDataSet StormIndexDataSet;
    public Color Color;
    public Vector3 Position;
    public Vector3 Scale;
    public Vector3 Rotation = Vector3.zero;
    public float lowerZBound;
    public float upperZBound;
    public int sunriseIndex;
    public int sunsetIndex;
    public int SoundMuted;
    // public Mc1Data Mc1Data;
}
}