using System;
using System.Collections.Generic;
using System.Linq;
using CodeControl;
using UnityEngine;
using UnityEngine.Audio;

namespace Scenes
{
    public class EarthSphereController : Controller<EarthSphereModel>
    {
        public AudioClip showAudioClip;
        public AudioClip hideAudioClip;
        public AudioClip ambientAudioClip;

        private AudioSource showHideAudioSource;
        private AudioSource ambientAudioSource;

        private AudioMixerGroup pitchBendGroup;

//        private bool isBrushed = false;
//        private float slicingPlanePosition;

        private EarthSphereView view;
        // private List<CMVDataPointController> cmvDataPointControllers = new List<CMVDataPointController>();

        public void Awake()
        {
            view = GetComponent<EarthSphereView>();
            AudioSource[] audioSources = GetComponents<AudioSource>();
            if (audioSources.Length < 2)
            {
                Debug.Log("Error fetching the audio source array.");
            }

            // // Mapping audio to sphere
            
            // showHideAudioSource = audioSources[0];
            // ambientAudioSource = audioSources[1];

            // pitchBendGroup = DataUtil.FindAudioMixerGroup("Pitch Bend Mixer CMV Sphere");
            // ambientAudioSource.outputAudioMixerGroup = pitchBendGroup;
        }

        protected override void OnInitialize()
        {
            view.SetPlotName(model.PlotName);
            view.SetRotation(model.Rotation);
            view.SetPosition(model.CenterPosition);
            view.SetAmbientAudio(ambientAudioSource, ambientAudioClip);
            view.SetScale(model.Scale);
            view.SetActive(model.visibility);
//            slicingPlanePosition = model.SlicingPlanePosition;

            // cmvDataPointControllers = view.PlotSpherePlots(model.RegionIdToLocationMap, model.MaxSphereScale,
            //     model.MinSphereScale, model.Mc1Data, model.ScaleDataColumnIndex, model.ColorDataColumnIndex,
            //     model.SlicingPlanePosition, model.visibility, model.minColor, model.maxColor, model.minBrushColor,
            //     model.maxBrushColor);

            // Message.AddListener<SlicingPlaneMessage>("slicing_plane_position_changed",
            //     OnSlicingPlaneMessageReceive);
            // Message.AddListener<SlicingPlaneManipulationMessage>("slicing_plane_manipulation_changed",
            //     OnSlicingPlaneManipulationMessageReceive);
            
//            Message.AddListener<DataPointMessage>("floor_data_sphere_clicked", OnDataPointMessageReceive);
        }

//        private void OnDataPointMessageReceive(DataPointMessage m)
//        {
//            int location = 1;
//            isBrushed = !isBrushed;
//            foreach (DataPointController dataPointController in dataPointControllers)
//            {
//                if (m.regionId == location)
//                {
//                    Color color = MapPlotViewCmvSphere.ComputeSphereColor(model.Mc1Data, this.slicingPlanePosition,
//                        location, model.ColorDataColumnIndex, model.minColor, model.maxColor);
//                    dataPointController.UpdateColor(color);
//                }
//
//                location += 1;
//            }
//        }

//         private void OnSlicingPlaneMessageReceive(SlicingPlaneMessage m)
//         {
//             OnMessageReceive(m.slicingPlanePosition);
//         }
//
//         private void OnSlicingPlaneManipulationMessageReceive(SlicingPlaneManipulationMessage m)
//         {
// //            OnMessageReceive(m.slicingPlanePosition);
//         }
//
//         private void OnMessageReceive(float slicingPlanePosition)
//         {
//             int location = 1;
//             foreach (CMVDataPointController dataPointController in cmvDataPointControllers)
//             {
//                 Vector3 scale = MapPlotViewCmvSphere.ComputeSphereScale(model.Mc1Data, slicingPlanePosition, location,
//                     model.MaxSphereScale, model.MinSphereScale, model.ScaleDataColumnIndex);
//                 dataPointController.UpdateScale(scale);
//
//                 Color brushColor = MapPlotViewCmvSphere.ComputeSphereColor(model.Mc1Data, slicingPlanePosition,
//                     location, model.ColorDataColumnIndex, model.minBrushColor, model.maxBrushColor);
//                 Color color = MapPlotViewCmvSphere.ComputeSphereColor(model.Mc1Data, slicingPlanePosition, location,
//                     model.ColorDataColumnIndex, model.minColor, model.maxColor);
//
//                 dataPointController.UpdateColor(color, brushColor);
//                 location += 1;
//             }

        //     SetActive(model.visibility);
        //
        //     float totalSum = 0f;
        //     AllReportsAtTimeStamp allReportsAtTimeStamp = model.Mc1Data.GetData(slicingPlanePosition);
        //     for (int i = 1; i < 20; i++)
        //     {
        //         AggregateReport aggregateReport = allReportsAtTimeStamp.GetAggregateReport(i);
        //         // List<float> average = aggregateReport.GetAverage();
        //         // float sum = average.Sum(item => item);
        //         totalSum = totalSum + aggregateReport.GetNonNegativeReportCount(model.AmbientAudioDataColumnIndex);
        //     }
        //
        //     float pitch = (totalSum / 500) * 1.5f + 0.5f;
        //     view.SetAmbientAudioPitch(ambientAudioSource, pitchBendGroup, pitch);
        //
        //     // https://answers.unity.com/questions/25139/how-i-can-change-the-speed-of-a-song-or-sound.html
        // }
        //
        // public void SetActive(bool active)
        // {
        //     GetModel().visibility = active;
        //     view.SetActive(GetModel().visibility);
        //     SetChildrenVisibility(GetModel().visibility);
        // }
        //
        // private void SetChildrenVisibility(bool visibility)
        // {
        //     cmvDataPointControllers.ForEach(cmvDataPointController => cmvDataPointController.SetActive(visibility));
        // }
        //
        // public MapPlotModelCmvSphere GetModel()
        // {
        //     return model;
        // }

        public void PlayShowSound()
        {
            view.PlayAudioClip(showHideAudioSource, showAudioClip);
            view.PlayAmbientAudio(ambientAudioSource, ambientAudioClip, showAudioClip);
        }

        public void PlayHideSound()
        {
            view.PauseAmbientAudio(ambientAudioSource);
            view.PlayAudioClip(showHideAudioSource, hideAudioClip);
        }
    }
}