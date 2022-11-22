using System;
using System.Collections.Generic;
using System.Globalization;
using CodeControl;
using UnityEngine;

namespace Scenes
{
    public class LeftSlidingBarHandleView : MonoBehaviour
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

        public void PlotLinePlots(Dictionary<int, Vector3> regionIdToLocationMap, StormIndexDataSet modelStormIndexDataSet)
        {
            DateTime endTimeStamp = modelStormIndexDataSet.lastTimeStamp;
            DateTime currentTimeStamp = modelStormIndexDataSet.earliestTimeStamp;
            TimeSpan oneMinutes = modelStormIndexDataSet.timeResolution;
            
            int resolution = 50;

            // float value;
            
            // dataa is a dictionary with location as key, and another dictionary as value.
            Dictionary<int, Dictionary<string, List<float>>> dataa = new Dictionary<int, Dictionary<string, List<float>>>
            {
                {1, new Dictionary<string, List<float>>()},
                {2, new Dictionary<string, List<float>>()}
            };

            
            while (currentTimeStamp < endTimeStamp)
            {
                // Debug.Log("timestamp=" + currentTimeStamp + " convertedTimeStamp=" + modelStormIndexDataSet.DateTimeToIndex(currentTimeStamp));

                int timeStampIndex = modelStormIndexDataSet.DateTimeToIndex(currentTimeStamp);

                float valueSymH = modelStormIndexDataSet.data[0, 4, timeStampIndex];
                float valueDTec = modelStormIndexDataSet.data[0, 1, timeStampIndex];


                List<float> value = new List<float>
                {
                    valueDTec, valueSymH
                };


                // Debug.Log("timestamp = " + currentTimeStamp + "  Index = " + timeStampIndex + " SYM-value =" + value);

                // StormIndexReport stormIndexReport = new StormIndexReport(currentTimeStamp);
                // try
                // {
                //     stormIndexReport = modelStormIndexDataSet.GetData(currentTimeStamp);
                // }
                // catch (Exception e)
                // {
                //     Debug.Log("Report not found for time stamp : " +
                //               currentTimeStamp.ToString(CultureInfo.CurrentCulture));
                // }
                //
                
                foreach (KeyValuePair<int, Dictionary<string, List<float>>> locationToDictPair in dataa)
                {
                    // int location = locationToDictPair.Key;
                    // AggregateReport aggregateReportForLocationAndTimeStamp =
                    //     allReportsAtTimeStamp.GetAggregateReport(location);
                    // int count = aggregateReportForLocationAndTimeStamp.GetAggregateCount();
                    locationToDictPair.Value[currentTimeStamp.ToString(CultureInfo.CurrentCulture)] =  value;
                    
                    // Debug.Log("Dictionary value:  "+ locationToDictPair.Value[currentTimeStamp.ToString(CultureInfo.CurrentCulture)]);
                }
                
                
                currentTimeStamp += oneMinutes;
            }
            
            
            foreach (KeyValuePair<int, Vector3> keyValuePair in regionIdToLocationMap)
            {
                LinePlotModel linePlotModel = new LinePlotModel();
                linePlotModel.OriginPosition =
                    Vector3.Scale(keyValuePair.Value - new Vector3(0.5f, 0.5f, 0.5f), new Vector3(-10f, 1f, 10f)) +
                    new Vector3(0, 1f, 0);
                linePlotModel.OriginPosition.y = linePlotModel.OriginPosition.y + 3.0f;
                linePlotModel.Scale = new Vector3(0.2f, 0.15f, 5f);
                linePlotModel.Data = dataa[keyValuePair.Key];
                linePlotModel.DataVariable = keyValuePair.Key - 1;
                linePlotModel.LineWidth = 0.01f;
                linePlotModel.Rotation = new Vector3(-90f, 0f, 0f);
                linePlotModel.DataPointScale = Vector3.one / resolution;

                Controller.Instantiate<LinePlotController>(linePlotModel.PrefabName, linePlotModel, transform);
                
                // Debug.Log("keyValuePair.Key   " + keyValuePair.Key + "   dataa[keyValuePair.Key]  " + dataa[keyValuePair.Key]);
            }
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
}