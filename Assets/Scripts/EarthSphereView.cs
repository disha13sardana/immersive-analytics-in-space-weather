using System.Collections.Generic;
using CodeControl;
using UnityEngine;
using UnityEngine.Audio;

namespace Scenes
{
    public class EarthSphereView : MonoBehaviour
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
            GetComponent<Transform>().eulerAngles = rotation;
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

        // // Plotting data points hovering over the Earth model sphere
        public void SetPlotName(string plotName)
        {
            GetComponent<Transform>().GetChild(0).gameObject.GetComponent<TextMesh>().text = plotName;
        }

        // public List<CMVDataPointController> PlotSpherePlots(Dictionary<int, Vector3> modelRegionIdToLocationMap,
        //     Vector3 modelMaxSphereScale,
        //     Vector3 modelMinSphereScale, Mc1Data modelMc1Data, int modelScaleDataColumnIndex,
        //     int modelColorDataColumnIndex,
        //     float modelSlicingPlanePosition, bool modelVisibility, Color minColor, Color maxColor, Color minBrushColor,
        //     Color maxBrushColor)
        // {
        //     List<CMVDataPointController> cmvDataPointControllers = new List<CMVDataPointController>();
        //
        //     foreach (KeyValuePair<int, Vector3> keyValuePair in modelRegionIdToLocationMap)
        //     {
        //         CMVDataPointModel cmvDataPointModel = new CMVDataPointModel();
        //         cmvDataPointModel.Position =
        //             Vector3.Scale(keyValuePair.Value - new Vector3(0.5f, 0.5f, 0.5f), new Vector3(-10f, 1f, 10f)) +
        //             new Vector3(0, 1f, 0);
        //
        //         Vector3 scaledScale = ComputeSphereScale(modelMc1Data, modelSlicingPlanePosition,
        //             keyValuePair.Key, modelMaxSphereScale, modelMinSphereScale, modelScaleDataColumnIndex);
        //
        //         cmvDataPointModel.Scale = Vector3.Scale(scaledScale, transform.localScale);
        //
        //         cmvDataPointModel.Color = ComputeSphereColor(modelMc1Data, modelSlicingPlanePosition, keyValuePair.Key,
        //             modelColorDataColumnIndex, minColor, maxColor);
        //
        //         cmvDataPointModel.BrushColor = ComputeSphereColor(modelMc1Data, modelSlicingPlanePosition,
        //             keyValuePair.Key,
        //             modelColorDataColumnIndex, minBrushColor, maxBrushColor);
        //
        //         cmvDataPointModel.SerialId = keyValuePair.Key;
        //
        //         cmvDataPointModel.Visibility = modelVisibility;
        //
        //         cmvDataPointControllers.Add(Controller.Instantiate<CMVDataPointController>(cmvDataPointModel.PrefabName,
        //             cmvDataPointModel, transform));
        //     }
        //
        //     // SetActive(modelVisibility);
        //     return cmvDataPointControllers;
        // }

        // // Mapping data value to sphere's color and scale
        
        // public static Vector3 ComputeSphereScale(Mc1Data modelMc1Data, float modelSlicingPlanePosition, int location,
        //     Vector3 modelMaxSphereScale, Vector3 modelMinSphereScale, int modelScaleDataIndex)
        // {
        //     AllReportsAtTimeStamp allReportsAtTimeStamp = modelMc1Data.GetData(modelSlicingPlanePosition);
        //     Vector3 scalingFactor = (modelMaxSphereScale - modelMinSphereScale) / 10;
        //     Vector3 shiftingFactor = modelMinSphereScale;
        //
        //     AggregateReport aggregateReport = allReportsAtTimeStamp.GetAggregateReport(location);
        //     float realScale = aggregateReport.GetNonNegativeReportCountLogarithm(modelScaleDataIndex);
        //     return realScale * scalingFactor + shiftingFactor;
        // }
        //
        // public static Color ComputeSphereColor(Mc1Data modelMc1Data, float modelSlicingPlanePosition, int location,
        //     int modelColorDataColumnIndex, Color minColor, Color maxColor)
        // {
        //     AllReportsAtTimeStamp allReportsAtTimeStamp = modelMc1Data.GetData(modelSlicingPlanePosition);
        //     AggregateReport aggregateReport = allReportsAtTimeStamp.GetAggregateReport(location);
        //     float colorFactor = aggregateReport.GetAverage(modelColorDataColumnIndex) / 10f;
        //     return Color.Lerp(minColor, maxColor, colorFactor);
        // }

        public void SetActive(bool active)
        {
            GetComponent<Renderer>().enabled = active;
            GetComponent<Transform>().GetChild(0).gameObject.GetComponent<TextMesh>().GetComponent<Renderer>().enabled = active;
            // DataUtil.SetVisibility(gameObject, active);
        }

        public void PlayAudioClip(AudioSource showHideAudioSource, AudioClip audioClip)
        {
            if (audioClip == null)
            {
                return;
            }

            showHideAudioSource.PlayOneShot(audioClip);
        }

        public void SetAmbientAudio(AudioSource ambientAudioSource, AudioClip audioClip)
        {
            if (audioClip == null)
            {
                return;
            }

            ambientAudioSource.clip = audioClip;
            ambientAudioSource.loop = true;
            ambientAudioSource.spatialBlend = 1.0f;
            ambientAudioSource.volume = 0.5f;
        }

        public void PlayAmbientAudio(AudioSource ambientAudioSource, AudioClip ambientAudioClip,
            AudioClip showAudioClip)
        {
            if (ambientAudioClip == null)
            {
                return;
            }

            // Citation: https://gamedevbeginner.com/ultimate-guide-to-playscheduled-in-unity/
            // double delay2 = 0.2;
            // if (showAudioClip)
            // {
            //     delay2 = (double) showAudioClip.samples / showAudioClip.frequency;
            // }

            ambientAudioSource.loop = true;
            ambientAudioSource.Play(0);
            // ambientAudioSource.PlayScheduled(AudioSettings.dspTime + delay2);
        }

        public void PauseAmbientAudio(AudioSource ambientAudioSource)
        {
            ambientAudioSource.Pause();
        }

        public void SetAmbientAudioPitch(AudioSource ambientAudioSource, AudioMixerGroup pitchBendGroup, float pitch)
        {
            ambientAudioSource.pitch = pitch;
            pitchBendGroup.audioMixer.SetFloat("pitchBend", 1f / pitch);
        }
    }
}