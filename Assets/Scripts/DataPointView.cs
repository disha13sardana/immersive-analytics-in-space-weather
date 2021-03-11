using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataPointView : MonoBehaviour
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
        return GetComponent<Transform>().position;
    }

    public void SetPosition(Vector3 position)
    {
        GetComponent<Transform>().localPosition = position;
    }

    public void SetScale(Vector3 scale)
    {
        GetComponent<Transform>().localScale = scale;
    }

    public void SetAudio(AudioClip audioClip, Vector3 modelScale)
    {
        if (audioClip == null)
        {
            return;
        }

        AudioSource audioSource = gameObject.AddComponent<AudioSource>();
        audioSource.clip = audioClip;
        audioSource.loop = true;
        audioSource.spatialBlend = 1.0f;
        audioSource.volume = modelScale.x;
//        audioSource.spread = modelScale.x * 10f;
        audioSource.Play(0);
    }
}