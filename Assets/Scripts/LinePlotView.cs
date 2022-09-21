using System;
using System.Collections.Generic;
using UnityEngine;

namespace Scenes
{
    public class LinePlotView : MonoBehaviour
    {
        private DateTime startDateTime = new DateTime(2011, 10, 24, 00, 00, 00);

        float opacity = .7f;

        int resolution = 10;
        
        public void PlotData(Dictionary<string, float> timeStampToValueMap, float lineWidth)
        {
            LineRenderer lr = GetComponent<LineRenderer>();
            lr.widthMultiplier = lineWidth;
            lr.positionCount = timeStampToValueMap.Count+2;
            lr.useWorldSpace = false;
            lr.colorGradient = ComputeGradient(opacity);

            //Source: https://catlikecoding.com/unity/tutorials/basics/building-a-graph/

            lr.SetPosition(0, new Vector3(0f, 5f, 0.1f ));
            
            int i = 1;
            foreach (KeyValuePair<string, float> timeStampToValuePair in timeStampToValueMap)
            {
                // z = float i/5 because we need to scale the data points.
                // 5 because resolution = 10 , so half the scale: 10/2 = 5
                lr.SetPosition(i, new Vector3(0f, timeStampToValuePair.Value , 0.1f + (float) i / (resolution/2)));
                i += 1;
                
                // Debug.Log("i:after   " + i + "   timeStampToValuePair   : " + timeStampToValuePair.Value + "  " + timeStampToValuePair.Key);
            }

            lr.SetPosition(i, new Vector3(0f, 5f, 0.1f +  (float)i / (resolution / 2)));
            

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