using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using CodeControl;
using UnityEngine;

public class DataPointModel : Model
{
    public string PrefabName = "DataPointPrefab";
    public int ParentSerialId;
    public int SerialId;
    public Color Color;
    public Color BrushColor;
    public Vector3 Position;
    public Vector3 Scale;
    public AudioClip AudioClip;
}
