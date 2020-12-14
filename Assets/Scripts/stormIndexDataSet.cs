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
    private static int totalDays = 2; // total number of days
    private static int timeInterval = 1; // in minutes
    private static int totalTimeSteps = (60/timeInterval)*24*totalDays;
    private static int totalNumberOfRegions = 1; // n_regions 
    private static int totalNUmberOfColumns = 5; // n_columns
    
    // public float[,,] data = new float[19, 6, 1441]; // n_regions x n_columns x n_time_steps
    public float[,,] data = new float[totalNumberOfRegions, totalNUmberOfColumns, totalTimeSteps]; // n_regions x n_columns x n_time_steps
    
    public TimeSpan timeResolution = TimeSpan.FromMinutes(5);
    public DateTime earliestTimeStamp = new DateTime(2011, 10, 24, 00, 00, 00);
    public DateTime lastTimeStamp = new DateTime(2011, 10, 25, 23, 59, 00);
    // public DateTime lastTimeStamp = new DateTime(2011, 10, 24, 01, 00, 00);
    
    
    public StormIndexDataSet(string fileName)
    {
        List<Dictionary<string, object>> pointList = CSVReader.Read(fileName);
        for (int i = 0; i < pointList.Count; i++)
        {
            Dictionary<string, object> report = pointList[i];

            DateTime timeStamp = DateTime.Parse(report[StormIndexDataUtil.StormIndexColumnNames[0]].ToString());
            
            int timeStampIndex = DateTimeToIndex(timeStamp);

            int region = Int32.Parse(report[StormIndexDataUtil.StormIndexColumnNames[6]].ToString()) - 1;

            float DOY = float.Parse(report[StormIndexDataUtil.StormIndexColumnNames[1]].ToString());
            data[region, 0, timeStampIndex] = DOY;
            
            float ASY_D = float.Parse(report[StormIndexDataUtil.StormIndexColumnNames[2]].ToString());
            data[region, 1, timeStampIndex] = ASY_D;
            
            float ASY_H = float.Parse(report[StormIndexDataUtil.StormIndexColumnNames[3]].ToString());
            data[region, 2, timeStampIndex] = ASY_H;
            
            float SYM_D = float.Parse(report[StormIndexDataUtil.StormIndexColumnNames[4]].ToString());
            data[region, 3, timeStampIndex] = SYM_D;
            
            float SYM_H = float.Parse(report[StormIndexDataUtil.StormIndexColumnNames[5]].ToString());
            data[region, 4, timeStampIndex] = SYM_H;
            
            // Debug.Log("loading..." +  timeStamp +  "  TimeStampIndex " + timeStampIndex + "  SYM " + data[0, 4, timeStampIndex]);

        }
        
    }
    
    

    public int DateTimeToIndex(DateTime dateTime)
    {
        TimeSpan timeSpan = dateTime.Subtract(earliestTimeStamp);
        return Mathf.RoundToInt((float) timeSpan.TotalMinutes);
    }

    public DateTime IndexToDateTime(int index)
    {
        TimeSpan timeSpan = TimeSpan.FromMinutes(index * 5);
        return earliestTimeStamp + timeSpan;
    }
}
