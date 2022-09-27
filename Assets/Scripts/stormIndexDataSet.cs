using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Scenes;
using UnityEngine;

/**
 * This class is intended to hold all the data and the required encapsulation methods related to the Storm Index data-set.
 */
public class StormIndexDataSet
{
    // TODO Make me read from dataset
    private int totalDays; // total number of days
    private int timeInterval; // in minutes
    private int totalTimeSteps;
    public int totalNumberOfRegions;
    public int totalNUmberOfColumns;
    public float[,,] data;
    public TimeSpan timeResolution = TimeSpan.FromMinutes(5);
    // TODO Make me analysze from Dataset or GUI
    public DateTime earliestTimeStamp;
    public DateTime lastTimeStamp;
    public int dataPointCount;
    
    
    public StormIndexDataSet(string fileName)
    {
        CSVReader csvReader = new CSVReader();
        // TODO So the list from main is irrelevant and read as this anyway
        List<Dictionary<string, object>> pointList = csvReader.Read(fileName);
        // Get info from csvReader
        totalNumberOfRegions = csvReader.numRegions;//numberOfRegions;
        totalNUmberOfColumns = csvReader.numColumns - 2; // -2 bc first num and last region
        timeInterval = csvReader.timeIntervalMinutes;
        earliestTimeStamp = csvReader.firstTime;
        lastTimeStamp = csvReader.lastTime;
        this.totalDays = csvReader.totalDays;

        if (timeInterval != 0) totalTimeSteps = (60/timeInterval)*24*totalDays;
        else {
            totalTimeSteps = 1;
        }
        data = new float[totalNumberOfRegions, totalNUmberOfColumns, totalTimeSteps];

        
        //pointList.
        for (int i = 0; i < pointList.Count; i++)
        {
            Dictionary<string, object> report = pointList[i];
            DateTime timeStamp;
            // issue between 'DateTime' and 'Datetime' header... temp solution is try both
            try {
                timeStamp = DateTime.Parse(report[StormIndexDataUtil.StormIndexColumnNames[0]].ToString());
            } catch (KeyNotFoundException e1) {
                try {
                    timeStamp = DateTime.Parse(report["Datetime"].ToString());
                }
                catch (KeyNotFoundException e2) {
                    timeStamp = DateTime.Parse(report["TimeStamp"].ToString());
                }
            }
            
            int timeStampIndex = DateTimeToIndex(timeStamp);

            // TODO Check last column for region.
            int region = Int32.Parse(report[StormIndexDataUtil.StormIndexColumnNames[totalNUmberOfColumns + 1]].ToString()) - 1; // num columns - 2 + 1

            Debug.Log("Our Region" + region);

            for (int j = 0; j < totalNUmberOfColumns; j++) {
                
                data[region, j, timeStampIndex] = float.Parse(report[StormIndexDataUtil.StormIndexColumnNames[j+1]].ToString());
                Debug.Log(region + " " + j + " " + timeStampIndex + " = " + data[region, j, timeStampIndex]);
            }


        }

        dataPointCount = pointList.Count;

        
    }
    
    

    public int DateTimeToIndex(DateTime dateTime)
    {
        TimeSpan timeSpan = dateTime.Subtract(earliestTimeStamp);
        return Mathf.RoundToInt((float) timeSpan.TotalMinutes);
    }

    public DateTime IndexToDateTime(int index)
    {
        TimeSpan timeSpan = TimeSpan.FromMinutes(index * 1);
        return earliestTimeStamp + timeSpan;
    }
}
