using System.Collections;
using System.Collections.Generic;
using CodeControl;
using JetBrains.Annotations;
using Scenes;
using UnityEngine;

public class RightSlidingBarHandleView : MonoBehaviour
{
    public Vector3 GetPosition()
    {
        return GetComponent<Transform>().position;
    }

    public void SetPosition(Vector3 position)
    {
        GetComponent<Transform>().localPosition = position;
    }

    public Vector3 GetScale()
    {
        return GetComponent<Transform>().localScale;
    }

    public void SetScale(Vector3 scale)
    {
        GetComponent<Transform>().localScale = scale;
    }

    public void SetRotation(Vector3 rotation)
    {
        GetComponent<Transform>().localEulerAngles = rotation;
    }

    public void RotateBy(Vector3 rotation)
    {
        Vector3 currentEulerAngles = GetComponent<Transform>().eulerAngles;
        GetComponent<Transform>().eulerAngles = new Vector3(
            currentEulerAngles.x + rotation.x,
            currentEulerAngles.y + rotation.y,
            currentEulerAngles.z + rotation.z
        );
    }
    

    public void SetActive(bool active)
    {
        gameObject.SetActive(active);
    }

    public void SetPlotLabel(string plotName)
    {
        GetComponent<Transform>().GetChild(0).gameObject.GetComponent<TextMesh>().text = plotName;
    }
}