using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;

// Taken from here: https://bravenewmethod.com/2014/09/13/lightweight-csv-reader-for-unity/

// Code parses a CSV, converting values into ints or floats if able, and returning a List<Dictionary<string, object>>.

public class CSVReader
{
    static string SPLIT_RE = @",(?=(?:[^""]*""[^""]*"")*(?![^""]*""))"; // Define delimiters, regular expression craziness
    static string LINE_SPLIT_RE = @"\r\n|\n\r|\n|\r"; // Define line delimiters, regular experession craziness
    static char[] TRIM_CHARS = { '\"' };

    // Added by shw
    public int numColumns = 0;
    public int numRegions = 0;
    public DateTime firstTime;
    public DateTime lastTime;
    public int timeIntervalMinutes = 0;
    public int totalDays = 0;

    public List<Dictionary<string, object>> Read(string file) //Declare method
    {
        // Debug.Log("CSVReader is reading " + file); // Print filename, make sure parsed correctly

        var list = new List<Dictionary<string, object>>(); //declare dictionary list

        TextAsset data = Resources.Load(file) as TextAsset; //Loads the TextAsset named in the file argument of the function

        // Debug.Log("Data loaded:" + Data); // Print raw Data, make sure parsed correctly

        var lines = Regex.Split(data.text, LINE_SPLIT_RE); // Split Data.text into lines using LINE_SPLIT_RE characters

        if (lines.Length <= 1) return list; //Check that there is more than one line

        var header = Regex.Split(lines[0], SPLIT_RE); //Split header (element 0)
        this.numColumns = (int)header.Length;

        this.firstTime = DateTime.Parse(Regex.Split(lines[1], SPLIT_RE)[0]);
        DateTime secondTime = DateTime.Parse(Regex.Split(lines[2], SPLIT_RE)[0]);
        // Self explanatory
        timeIntervalMinutes = secondTime.Minute - firstTime.Minute;
        // Get the last date. If newline at end, get length - 2
        if (lines[lines.Length - 1].Length == 0)
            this.lastTime = DateTime.Parse(Regex.Split(lines[lines.Length - 2], SPLIT_RE)[0]);
        else
            this.lastTime = DateTime.Parse(Regex.Split(lines[lines.Length - 1], SPLIT_RE)[0]);
        // day - day plus one (always one day)
        this.totalDays = lastTime.Day - firstTime.Day + 1;

        // Loops through lines
        for (var i = 1; i < lines.Length; i++)
        {

            var values = Regex.Split(lines[i], SPLIT_RE); //Split lines according to SPLIT_RE, store in var (usually string array)
            if (values.Length == 0 || values[0] == "") continue; // Skip to end of loop (continue) if value is 0 length OR first value is empty

            var entry = new Dictionary<string, object>(); // Creates dictionary object

            // Loops through every value
            for (var j = 0; j < header.Length && j < values.Length; j++)
            {
                if (j == header.Length - 1) numRegions = Math.Max(int.Parse(values[j]), numRegions);
                string value = values[j]; // Set local variable value
                value = value.TrimStart(TRIM_CHARS).TrimEnd(TRIM_CHARS).Replace("\\", ""); // Trim characters
                object finalvalue = value; //set final value

                int n; // Create int, to hold value if int

                float f; // Create float, to hold value if float

                // If-else to attempt to parse value into int or float
                if (int.TryParse(value, out n))
                {
                    finalvalue = n;
                }
                else if (float.TryParse(value, out f))
                {
                    finalvalue = f;
                }
                entry[header[j]] = finalvalue;

                //Debug.Log(header[j] + ' ' + finalvalue);
            }
            list.Add(entry); // Add Dictionary ("entry" variable) to list
        }

        

        return list; //Return list
    }
}