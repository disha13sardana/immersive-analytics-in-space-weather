using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Scenes
{
public class SlicingPlaneView : MonoBehaviour
{
    public Color GetColor()
    {
        return GetComponent<Renderer>().material.color;
    }

    public void SetColor(Color color)
    {
        GetComponent<Renderer>().material.color = color;
    }

    public Vector3 GetPosition()
    {
        return GetComponent<Transform>().localPosition;
    }

    public void SetPosition(Vector3 position)
    {
        Vector3 temp = position;
        temp.x = 0f;
        position = temp;
        GetComponent<Transform>().localPosition = position;
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

    public void SetActive(bool active)
    {
        gameObject.SetActive(active);
    }

    public void SetPlotLabel(string plotName)
    {
             
        GetComponent<Transform>().GetChild(0).gameObject.GetComponent<TextMesh>().text = plotName;
        GetComponent<Transform>().GetChild(2).gameObject.GetComponent<TextMesh>().text = plotName;
    }

//    public void SetPlaneSound(float value)
//    {
//        Debug.Log("Setting plane sound. PitchValue: " + value);
//        AudioSource audioSource = GetComponent<AudioSource>();
//        audioSource.clip = Resources.Load("sine-wave-440") as AudioClip;
//        audioSource.loop = true;
//        audioSource.spatialBlend = 1.0f;
//        audioSource.volume = 1f;
//        //audioSource.dopplerLevel = 5.0f;
////        var pitch = value / 200.0f - 1.0f;
//        audioSource.pitch = ComputePitch(value);
//        //audioSource.pitch = 1.0f;
//        //Debug.Log("Slicing plane pitch value: " + value);
////        audioSource.Play(0);
//    }

    public void SetupPlaneAudio(AudioClip audioClip, float dataValue)
    {
        AudioSource audioSource = GetComponent<AudioSource>();
        audioSource.clip = audioClip;
        audioSource.loop = true;
        audioSource.spatialBlend = 1.0f;
        audioSource.volume = ComputeVolume(dataValue);
        audioSource.pitch = ComputePitch(dataValue);
        
    }

    public void SetPlaneSoundPitch(float value)
    {
        AudioSource audioSource = GetComponent<AudioSource>();
        audioSource.pitch = ComputePitch(value);
    }


    private float ComputeVolume(float value)
        {
            float minimumDataValue = -450f;
            float maximumDataValue = 125f;
            float minimumVolume = 0.1f;
            float maximumVolume = 1.5f;

            float volumeValue = (-((value - minimumDataValue) / (maximumDataValue - minimumDataValue)))*(maximumVolume-minimumVolume) + maximumVolume;

            
            return volumeValue;
        }
    /**
     * Citation: https://answers.unity.com/questions/127562/pitch-in-unity.html
     */
    private float ComputePitch(float value)
    {
        //   float pitch = 1; // default
        float semitone = 1.05946f;  // this is 2^(1/12) = 1 semitone = approx value taken
        float exponent = 1;

        //if (value > -150 && value <= -100)
        //{
        //    exponent = 1;
        //}
        //else if (value > -100 && value <= -50)
        //{
        //    exponent = 4;
        //}
        //else if (value > -50 && value <= 0)
        //{
        //    exponent = 7;
        //}
        //else if (value > 0)
        //{
        //    exponent = 12;
        //}

        if (value <= 0)
            {
                exponent = -((value / (-450)) * 6 + 3);   
            }

        if (value > 0)
            {
                exponent = -(-(value / 125) * 3 + 3);
            }

        //Debug.Log("Pitch value:" + Convert.ToSingle(Math.Pow(semitone, exponent)));

        return Convert.ToSingle(Math.Pow(semitone, exponent));
    }

    public void SetAudioActive(bool active)
    {
        AudioSource audioSource = GetComponent<AudioSource>();
        audioSource.mute = !active;
        if (active)
        {
            audioSource.Play(0);
        }
        else
        {
//            audioSource.Pause();
            audioSource.Stop();
        }
    }

    public void SetMaterial(Material material)
    {
        if (material is null)
        {
            return;
        }

        GetComponent<MeshRenderer>().material = material;
        GetComponent<Transform>().GetChild(1).GetComponent<MeshRenderer>().material = material;
    }

    public void StopAudio()
    {
        AudioSource audioSource = GetComponent<AudioSource>();
        audioSource.volume = 0f;
    }
}
}