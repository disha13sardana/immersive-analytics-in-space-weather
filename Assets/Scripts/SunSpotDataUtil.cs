using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SunSpotDataUtil: MonoBehaviour
{
    private string solarCycleSunSpotFileName = "DataFiles/solarCycleSunSpot";
    public SunSpotDataUtil()
    {
    
    List<Dictionary<string, object>> sunSpotData = CSVSunSpot.Read(solarCycleSunSpotFileName);

        LineRenderer lr = GetComponent<LineRenderer>();

        for (int i = 0; i < sunSpotData.Count; i++)
        {
            Debug.Log("Sun Spot Data Time: " + sunSpotData[i]["time-tag"]);
            Debug.Log("Sun Spot Data SSN: " + sunSpotData[i]["ssn"]);
        }
    }
    
}
