using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using UnityEngine;
using UnityEngine.Audio;

namespace Scenes
{
    public class StormIndexDataUtil
    {
        public static readonly float EPSILON = 0.001f;

        public static readonly IList<string> StormIndexColumnNames = new ReadOnlyCollection<string>
        (
            new List<String>
            {
                "DateTime",
                "DOY",
                "D_TEC",
                "ASY_H",
                "SYM_D",
                "SYM_H",
                "Location"
            }
        );

        public static Dictionary<string, float> ProcessStormIndexData(List<Dictionary<string, object>> pointList)
        {
            // Declare the offset date.
            DateTime offsetDateTime = new DateTime(2011, 10, 24, 01, 00, 00);
            // Declare the start date.
            DateTime startDateTime = new DateTime(2011, 10, 24, 00, 00, 00);

            // Initialize the return value.
            Dictionary<string, float> retVal = new Dictionary<string, float>();
            
            // Subtracting the offset date and the start date. (why though?)
            TimeSpan intervalDateTime = offsetDateTime - startDateTime;

            int totalRows = pointList.Count;
            
            int resolution = 120;

            Dictionary<string, float> data = new Dictionary<string, float>();

            for (int j = 0; j < resolution; j++)
            {
                for (int i = 0; i < totalRows; i++)
                {
                    string timeStamp = pointList[i][StormIndexColumnNames[0]].ToString();
                    //Debug.Log("Time Stamp: " + timeStamp);
                    DateTime csvDateTime = DateTime.Parse(timeStamp);
                    int result = DateTime.Compare(startDateTime, csvDateTime);
                    //Debug.Log("Result:" + result);
                    if (result == 0)
                    {
                        //Debug.Log("start Time:" + startDateTime);
                        //Debug.Log("Column 1 Values:" + (pointList[i][MC1_COLUMN_NAMES[1]]));

                        retVal[timeStamp] = Convert.ToSingle(pointList[i][StormIndexColumnNames[5]]);
                        startDateTime = startDateTime + intervalDateTime;
                    }
                }
            }

            return retVal;
        }

        public static Dictionary<DateTime, AllReportsAtTimeStamp> ProcessStormIndexData2(
            List<Dictionary<string, object>> pointList)
        {
            Dictionary<DateTime, AllReportsAtTimeStamp> output = new Dictionary<DateTime, AllReportsAtTimeStamp>();

           // Dictionary<DateTime, List<Report>>;
            
            foreach (Dictionary<string, object> report in pointList)
            {
                DateTime timeStamp = DateTime.Parse(report["DateTime"].ToString());

                // Initialize the key-value pair in the output dict if not present.
                if (!output.ContainsKey(timeStamp))
                {
                    output[timeStamp] = new AllReportsAtTimeStamp(timeStamp);
                }

                // Create the report from the given dict report.
                Report myReport = new Report(report);
                
                // Extract the location from the current report.
                var location = (int) report["Location"];
                
                // Add the report to the current timestamp object.
                output[timeStamp].AddReport(location, myReport);
            }

            return output;
        }

        public static int ParseToInt(object inputString)
        {
            return int.Parse(inputString.ToString());
        }

        public static List<float> NormalizeValues(List<float> values, float multiplier)
        {
            var max = values.Max();
            if (Math.Abs(max) < Double.Epsilon)
            {
                return values;
            }

            float ratio = multiplier / max;
            return values.Select(i => i * ratio).ToList();
        }

        public static void SetVisibility(GameObject gameObject, bool visibility)
        {
            Renderer[] renderers = gameObject.GetComponentsInChildren<Renderer>();
            foreach (Renderer renderer in renderers)
            {
                renderer.enabled = visibility;
            }
        }

        public static AudioMixerGroup FindAudioMixerGroup(string mixerName)
        {
            AudioMixer audioMixer = Resources.Load(mixerName) as AudioMixer;
            if (audioMixer != null)
            {
                AudioMixerGroup[] matchingGroups = audioMixer.FindMatchingGroups("");
                if (matchingGroups != null && matchingGroups.Length > 0)
                {
                    return matchingGroups[0];
                }
                else
                {
                    Debug.Log("Cannot find matching groups.");
                    return null;
                }
            }
            else
            {
                Debug.Log("Cannot find audio mixer.");
                return null;
            }
        }
    }
}