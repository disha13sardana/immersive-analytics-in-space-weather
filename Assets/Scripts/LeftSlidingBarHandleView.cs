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

        public void PlotLinePlots(Dictionary<int, Vector3> regionIdToLocationMap, StormIndexData modelStormIndexDataData)
        {
            DateTime endTimeStamp = new DateTime(2011, 10, 25, 23, 59, 00);
            DateTime currentTimeStamp = new DateTime(2011, 10, 24, 00, 00, 00);
            TimeSpan fiveMinutes = TimeSpan.FromMinutes(5);

            Dictionary<int, Dictionary<string, float>> dataa = new Dictionary<int, Dictionary<string, float>>
            {
                {1, new Dictionary<string, float>()}
            };

            while (currentTimeStamp < endTimeStamp)
            {
                AllReportsAtTimeStamp allReportsAtTimeStamp = new AllReportsAtTimeStamp(currentTimeStamp);
                try
                {
                    allReportsAtTimeStamp = modelStormIndexDataData.GetData(currentTimeStamp);
                }
                catch (Exception e)
                {
                    Debug.Log("Report not found for time stamp : " +
                              currentTimeStamp.ToString(CultureInfo.CurrentCulture));
                }

                foreach (KeyValuePair<int, Dictionary<string, float>> locationToDictPair in dataa)
                {
                    int location = locationToDictPair.Key;
                    AggregateReport aggregateReportForLocationAndTimeStamp =
                        allReportsAtTimeStamp.GetAggregateReport(location);
                    int count = aggregateReportForLocationAndTimeStamp.GetAggregateCount();
                    locationToDictPair.Value[currentTimeStamp.ToString(CultureInfo.CurrentCulture)] = count;
                }

                currentTimeStamp += fiveMinutes;
            }

            int resolution = 120;

            foreach (KeyValuePair<int, Vector3> keyValuePair in regionIdToLocationMap)
            {
                LinePlotModel linePlotModel = new LinePlotModel();
                linePlotModel.OriginPosition =
                    Vector3.Scale(keyValuePair.Value - new Vector3(0.5f, 0.5f, 0.5f), new Vector3(-10f, 1f, 10f)) +
                    new Vector3(0, 1f, 0);
                linePlotModel.OriginPosition.y = linePlotModel.OriginPosition.y - 0.5f;
                linePlotModel.Scale = new Vector3(0.2f, 0.15f, 5f);
                linePlotModel.Data = dataa[keyValuePair.Key];
                linePlotModel.LineWidth = 0.1f;
                linePlotModel.Rotation = new Vector3(-90f, 0f, 0f);
                linePlotModel.DataPointScale = Vector3.one / resolution;
                Controller.Instantiate<LinePlotController>(linePlotModel.PrefabName, linePlotModel, transform);
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