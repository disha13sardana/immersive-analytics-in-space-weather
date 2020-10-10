using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Scenes;
using UnityEngine;

/**
 * This class is intended to hold all the data and the required encapsulation methods related to the MC1 data-set.
 */
public class stormIndexDataSet
{
    private static int totalDays = 2; // total number of days
    private static int timeInterval = 5; // in minutes
    private static int totalTimeSteps = (60/timeInterval)*24*totalDays;
    
    // public float[,,] data = new float[19, 6, 1441]; // n_regions x n_columns x n_time_steps
    public float[,,] data = new float[1, 5, totalTimeSteps]; // n_regions x n_columns x n_time_steps
    
    private TimeSpan fiveMinutes = TimeSpan.FromMinutes(5);
    DateTime earliestTimeStamp = new DateTime(2011, 10, 24, 00, 00, 00);
    DateTime lastTimeStamp = new DateTime(2011, 10, 25, 23, 59, 00);
    
    public stormIndexDataSet(string fileName)
    {
        List<Dictionary<string, object>> pointList = CSVReader.Read(fileName);
        for (int i = 0; i < pointList.Count; i++)
        {
            Dictionary<string, object> report = pointList[i];

            DateTime timeStamp = DateTime.Parse(report[stormIndexDataUtil.stormIndex_COLUMN_NAMES[0]].ToString());
            int timeStampIndex = DateTimeToIndex(timeStamp);

            int region = Int32.Parse(report[stormIndexDataUtil.stormIndex_COLUMN_NAMES[6]].ToString()) - 1;

            float DOY = float.Parse(report[stormIndexDataUtil.stormIndex_COLUMN_NAMES[1]].ToString());
            data[region, 0, timeStampIndex] = DOY;
            
            float ASY_D = float.Parse(report[stormIndexDataUtil.stormIndex_COLUMN_NAMES[2]].ToString());
            data[region, 1, timeStampIndex] = ASY_D;
            
            float ASY_H = float.Parse(report[stormIndexDataUtil.stormIndex_COLUMN_NAMES[3]].ToString());
            data[region, 2, timeStampIndex] = ASY_H;
            
            float SYM_D = float.Parse(report[stormIndexDataUtil.stormIndex_COLUMN_NAMES[4]].ToString());
            data[region, 3, timeStampIndex] = SYM_D;
            
            float SYM_H = float.Parse(report[stormIndexDataUtil.stormIndex_COLUMN_NAMES[5]].ToString());
            data[region, 4, timeStampIndex] = SYM_H;
            
        }
    }

    public int DateTimeToIndex(DateTime dateTime)
    {
        TimeSpan timeSpan = dateTime - earliestTimeStamp;
        return timeSpan.Minutes / 5;
    }

    public DateTime IndexToDateTime(int index)
    {
        TimeSpan timeSpan = TimeSpan.FromMinutes(index * 5);
        return earliestTimeStamp + timeSpan;
    }
}
