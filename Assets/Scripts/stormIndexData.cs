using System;
using System.Collections.Generic;
using UnityEngine;

// Acting as a csv file for the code; either hold the data or supply the data

namespace Scenes
{
    public class StormIndexData
    {
        private Dictionary<DateTime, AllReportsAtTimeStamp> data;

        public readonly DateTime startDateTime = new DateTime(2011, 10, 24, 00, 00, 00);
        
        public readonly TimeSpan timeStep = TimeSpan.FromMinutes(5);

        public StormIndexData(List<Dictionary<string, object>> pointList)
        {
            Initialize(pointList);
        }

        public StormIndexData(string resourcePath)
        {
            List<Dictionary<string, object>> pointList = CSVReader.Read(resourcePath);
            Initialize(pointList);
        }

        private void Initialize(List<Dictionary<string, object>> pointList)
        {
            data = new Dictionary<DateTime, AllReportsAtTimeStamp>();

            foreach (Dictionary<string, object> report in pointList)
            {
                DateTime timeStamp = DateTime.Parse(report["DateTime"].ToString());

                // Initialize the key-value pair in the output dict if not present.
                if (!data.ContainsKey(timeStamp))
                {
                    data[timeStamp] = new AllReportsAtTimeStamp(timeStamp);
                }

                // Create the report from the given dict report.
                Report myReport = new Report(report);
                
                Debug.Log(myReport);
                // Extract the location from the current report.
                var location = (int) report["Location"];
                
                // Add the report to the current timestamp object.
                data[timeStamp].AddReport(location, myReport);
                
  
            }
        }

        public Dictionary<DateTime, AllReportsAtTimeStamp> GetData()
        {
            return data;
        }

        public AllReportsAtTimeStamp GetData(DateTime timeStamp)
        {
            return data[timeStamp];
        }

        public AllReportsAtTimeStamp GetData(float slicingPlanePosition)
        {
            if (slicingPlanePosition < 0f || slicingPlanePosition > 1f)
            {
                throw new Exception("Invalid slicing plane position received.");
            }

            // index should range only from zero to 1440.
            float indexFloat = data.Count * slicingPlanePosition;
            int index = (int) indexFloat;
            DateTime indexTimeStamp = startDateTime + TimeSpan.FromMinutes(5 * index);
            return data[indexTimeStamp];
        }

        public int GetCount()
        {
            return data.Count;
        }
    }
}