using System;
using System.Collections;
using System.Collections.Generic;
using Scenes;
using UnityEngine;

/**
 * This class is intended to hold all the data and the required encapsulation methods related to the MC1 data-set.
 */
public class MC1DataSet
{
    public float[,,] data = new float[19, 6, 1441]; // n_regions x n_columns x n_time_steps
    private TimeSpan fiveMinutes = TimeSpan.FromMinutes(5);
    DateTime earliestTimeStamp = new DateTime(2020, 04, 06, 00, 00, 00);
    DateTime lastTimeStamp = new DateTime(2020, 04, 11, 00, 00, 00);
    private int totalTimeSteps = 1441;

    public MC1DataSet(string fileName)
    {
        List<Dictionary<string, object>> pointList = CSVReader.Read(fileName);
        for (int i = 0; i < pointList.Count; i++)
        {
            Dictionary<string, object> report = pointList[i];

            DateTime timeStamp = DateTime.Parse(report[DataUtil.MC1_COLUMN_NAMES[0]].ToString());
            int timeStampIndex = DateTimeToIndex(timeStamp);

            int region = Int32.Parse(report[DataUtil.MC1_COLUMN_NAMES[7]].ToString()) - 1;

            float sewer_and_water = float.Parse(report[DataUtil.MC1_COLUMN_NAMES[1]].ToString());
            data[region, 0, timeStampIndex] = sewer_and_water;

            float power = float.Parse(report[DataUtil.MC1_COLUMN_NAMES[2]].ToString());
            data[region, 1, timeStampIndex] = power;

            float roads_and_bridges= float.Parse(report[DataUtil.MC1_COLUMN_NAMES[3]].ToString());
            data[region, 2, timeStampIndex] = roads_and_bridges;

            float medical = float.Parse(report[DataUtil.MC1_COLUMN_NAMES[4]].ToString());
            data[region, 3, timeStampIndex] = medical;

            float buildings = float.Parse(report[DataUtil.MC1_COLUMN_NAMES[5]].ToString());
            data[region, 4, timeStampIndex] = buildings;

            float shake_intensity = float.Parse(report[DataUtil.MC1_COLUMN_NAMES[6]].ToString());
            data[region, 5, timeStampIndex] = shake_intensity;
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
