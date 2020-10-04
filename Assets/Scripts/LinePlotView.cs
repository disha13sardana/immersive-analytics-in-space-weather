using System;
using System.Collections.Generic;
using UnityEngine;

namespace Scenes
{
    public class LinePlotView : MonoBehaviour
    {
        private DateTime startDateTime = new DateTime(2020, 04, 06, 00, 00, 00);
        float opacity = .5f;

        public void PlotData(Dictionary<string, float> timeStampToValueMap, float lineWidth)
        {
            LineRenderer lr = GetComponent<LineRenderer>();
            lr.widthMultiplier = lineWidth;
            lr.positionCount = timeStampToValueMap.Count;
            lr.useWorldSpace = false;
            lr.colorGradient = ComputeGradient(opacity);

            int i = 0;
            foreach (KeyValuePair<string, float> timeStampToValuePair in timeStampToValueMap)
            {
                lr.SetPosition(i, new Vector3(0f, (float) Math.Log(timeStampToValuePair.Value + 1f), (float) i / 60));
                i += 1;
            }
        }

        public void SetPosition(Vector3 position)
        {
            transform.localPosition = position;
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
            GetComponent<Transform>().localEulerAngles = new Vector3(
                currentEulerAngles.x + rotation.x,
                currentEulerAngles.y + rotation.y,
                currentEulerAngles.z + rotation.z
            );
        }

        private Gradient ComputeGradient(float gradientAlpha)
        {
            Gradient gradient = new Gradient();
            gradient.SetKeys(
                new[] {new GradientColorKey(Color.red, 0.0f), new GradientColorKey(Color.red, 1.0f)},
                new[] {new GradientAlphaKey(gradientAlpha, 0.0f), new GradientAlphaKey(gradientAlpha, 1.0f)}
            );
            return gradient;
        }
    }
}