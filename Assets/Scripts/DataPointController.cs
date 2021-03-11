using System.Collections;
using System.Collections.Generic;
using CodeControl;
// using Microsoft.MixedReality.Toolkit.Input;
using Scenes;
using UnityEngine;
using UnityEngine.EventSystems;

public class DataPointController : Controller<DataPointModel>
{
    private DataPointView dataPointView;

    private bool isBrushed;
    private static ILogger logger = Debug.unityLogger;

    private void Awake()
    {
        dataPointView = GetComponent<DataPointView>();
    }

    protected override void OnInitialize()
    {
        dataPointView.SetPosition(model.Position);
        dataPointView.SetScale(model.Scale);
        dataPointView.SetColor(model.Color);
        dataPointView.SetAudio(model.AudioClip, model.Scale);
    }

    public void UpdateScale(Vector3 newScale)
    {
        dataPointView.SetScale(newScale);
    }

    public void UpdateColor(Color newColor)
    {
        dataPointView.SetColor(newColor);
    }

    public DataPointModel GetModel()
    {
        return model;
    }
    //
    // public void OnPointerDown(MixedRealityPointerEventData eventData)
    // {
    // }
    //
    // public void OnPointerDragged(MixedRealityPointerEventData eventData)
    // {
    // }
    //
    // public void OnPointerUp(MixedRealityPointerEventData eventData)
    // {
    // }

    // public void OnPointerClicked(MixedRealityPointerEventData eventData)
    // {
    //     isBrushed = !isBrushed;
    //     dataPointView.SetColor(isBrushed ? model.BrushColor : model.Color);
    //     // GameObject testCube = GameObject.CreatePrimitive(PrimitiveType.Cube);
    //     // testCube.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
    //     // logger.Log("Default", "Emitting brushing message. RegionId: " + model.SerialId);
    //     EventManager.TriggerEvent("floor_data_sphere_clicked", new DataPointMessage(model.SerialId, isBrushed));
    //     // Message.Send<DataPointMessage>("floor_data_sphere_clicked", new DataPointMessage(model.SerialId, isBrushed));
    // }
}