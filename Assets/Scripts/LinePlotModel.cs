using System.Collections;
using System.Collections.Generic;
using CodeControl;
using UnityEngine;

public class LinePlotModel : Model
{
    public string PrefabName = "LinePlotPrefab";
    public Dictionary<string, float> Data;
    public Vector3 DataPointScale;
    public Vector3 OriginPosition;
    public Vector3 Scale;
    public float LineWidth;
    public Vector3 Rotation = Vector3.zero;
}
