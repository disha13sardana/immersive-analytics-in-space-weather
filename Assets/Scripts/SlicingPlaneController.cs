using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using CodeControl;
using Scenes;
using UnityEngine;
using UnityEngine.Serialization;

namespace Scenes
{

public class SlicingPlaneController : Controller<SlicingPlaneModel>
{
    public SlicingPlaneView view;
    private int NumFramesEventNotSent = 0;
    public int EmitEventEveryNFrames = 10;
    public Material DefaultMaterial;
    public Material SelectedMaterial;

    [FormerlySerializedAs("muteAudioSource")]
    public bool isAudioSourceMuted = true;

    public AudioClip slicingPlaneAudioClip = null;

    public void Awake()
    {
        view = GetComponent<SlicingPlaneView>();
    }

    protected override void OnInitialize()
    {
        view.SetMaterial(DefaultMaterial);
        view.SetPosition(model.Position);
        view.SetScale(model.Scale);
        view.SetRotation(model.Rotation);
//         Message.Send<SlicingPlaneMessage>("slicing_plane_position_changed",
//             new SlicingPlaneMessage(GetCurrentPositionRatio()));

//         float totalSum = 0f;
//         AllReportsAtTimeStamp allReportsAtTimeStamp = model.Mc1Data.GetData(GetCurrentPositionRatio());
//         for (int i = 1; i < 20; i++)
//         {
//             AggregateReport aggregateReport = allReportsAtTimeStamp.GetAggregateReport(i);
//             List<float> average = aggregateReport.GetAverage();
//             float sum = average.Sum(item => item);
//             totalSum = totalSum + sum;
//         }

// //        view.SetPlaneSound(totalSum);
//         view.SetupPlaneAudio(slicingPlaneAudioClip, totalSum);
    }

    public float GetCurrentPositionRatio()
    {
        float numerator = view.GetPosition().z - model.lowerZBound;
        float denominator = model.upperZBound - model.lowerZBound;
        if (Math.Abs(denominator - 0) < 0.00001)
        {
            Debug.Log(
                "Upper and lower bounds for slicing plane are too close which is leading to Divide-By-Zero error.");
            return 0f;
        }
        else
        {
            return numerator / denominator;
        }
    }

    void Update()
    {
//         if (transform.hasChanged)
//         {
//             NumFramesEventNotSent += 1;
//             if (NumFramesEventNotSent > EmitEventEveryNFrames)
//             {
//                 NumFramesEventNotSent = 0;
//                 Message.Send<SlicingPlaneMessage>("slicing_plane_position_changed",
//                     new SlicingPlaneMessage(GetCurrentPositionRatio()));
//             }


//             if (!isAudioSourceMuted)
//             {
//                 float totalSum = 0f;
//                 AllReportsAtTimeStamp allReportsAtTimeStamp = model.Mc1Data.GetData(GetCurrentPositionRatio());
//                 for (int i = 1; i < 20; i++)
//                 {
//                     AggregateReport aggregateReport = allReportsAtTimeStamp.GetAggregateReport(i);
//                     List<float> average = aggregateReport.GetAverage();
//                     float sum = average.Sum(item => item);
//                     totalSum = totalSum + sum;
//                 }

// //                view.SetPlaneSound(totalSum);
//                 view.SetPlaneSoundPitch(totalSum);
//             }


//             transform.hasChanged = false;
//         }

        // AllReportsAtTimeStamp allReportsAtTimeStamp2 = model.Mc1Data.GetData(GetCurrentPositionRatio());
        // DateTime dateTime = allReportsAtTimeStamp2.GetDateTime();
        // view.SetPlotLabel(dateTime.ToString(CultureInfo.InvariantCulture));
        view.SetPlotLabel("Label to be Added.");
    }

    void LateUpdate()
    {
        if (GetCurrentPositionRatio() <= 0.0f)
        {
            Vector3 currentPosition = view.GetPosition();
            //lowerZbound is actually on the right side now, that's why substracting
            currentPosition.z = model.lowerZBound - 0.01f;
            view.SetPosition(currentPosition);
        }

        if (GetCurrentPositionRatio() >= 1.0f)
        {
            Vector3 currentPosition = view.GetPosition();
            //upperZbound is actually on the leftt side now, that's why adding
            currentPosition.z = model.upperZBound + 0.01f;
            view.SetPosition(currentPosition);
        }
    }


    public void SetAudioActive(bool active)
    {
        isAudioSourceMuted = !active;
        view.SetAudioActive(active);
        //Debug.Log("Active!!!" + active);
    }

    public void EmitSlicingPlaneManipulationEndMessage()
    {
        Message.Send<SlicingPlaneManipulationMessage>("slicing_plane_manipulation_changed",
            new SlicingPlaneManipulationMessage(SlicingPlaneManipulationMessage.SlicingPlaneManipulationState.ENDED,
                GetCurrentPositionRatio()));
    }

    public void SetActive(bool active)
    {
        view.SetActive(active);
    }

    public void ApplySelectedMaterial()
    {
        view.SetMaterial(SelectedMaterial);
    }

    public void ApplyDefaultMaterial()
    {
        view.SetMaterial(DefaultMaterial);
    }
}
}