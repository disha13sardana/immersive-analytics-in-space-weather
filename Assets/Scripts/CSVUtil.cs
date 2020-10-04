using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class CSVUtil
{
    public static List<List<Dictionary<string, object>>> SeparateData(List<Dictionary<string, object>> data, List<string> firstListColumnNames, List<string> secondListColumnNames)
    {
        data = data.GetRange(1, 100);

        List<List<Dictionary<string, object>>> separateLists = new List<List<Dictionary<string, object>>>();
        if ((data == null) || (!data.Any()))
        {
            //Debug.Log("No input Data provided for separating the data set.");
            return separateLists;
        }

        List<Dictionary<string, object>> firstList = new List<Dictionary<string, object>>();
        List<Dictionary<string, object>> secondList = new List<Dictionary<string, object>>();
        foreach (Dictionary<string, object> dictionary in data)
        {
            // Populating the first dictionary.
            Dictionary<string, object> firstDictionary = new Dictionary<string, object>();
            foreach (string columnName in firstListColumnNames)
            {
                firstDictionary.Add(columnName, dictionary[columnName]);
            }
            firstList.Add(firstDictionary);

            // Populating the second dictionary.
            Dictionary<string, object> secondDictionary = new Dictionary<string, object>();
            foreach (string columnName in secondListColumnNames)
            {
                secondDictionary.Add(columnName, dictionary[columnName]);
            }
            secondList.Add(secondDictionary);
        }

        separateLists.Add(firstList);
        separateLists.Add(secondList);
        return separateLists;
    }
}
