using System;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;

namespace Scenes
{
    public class MC1AggregateReport
    {
        private readonly MC1Report sumValues = new MC1Report(new List<int>(new int[MC1Report.ColumnNameToPositionDict.Count]));

//        private readonly Report average = new Report(new List<int>(new int[Report.ColumnNameToPositionDict.Count]));
        private List<float> av = new List<float>(new float[MC1Report.ColumnNameToPositionDict.Count]);
        private int totalReportsAggregated = 0;

        private Dictionary<string, int> ColumnNameToValueCountDictionary = new Dictionary<string, int>
        {
            {"sewer_and_water", 0},
            {"power", 0},
            {"roads_and_bridges", 0},
            {"medical", 0},
            {"buildings", 0},
            {"shake_intensity", 0},
            {"location", 0},
        };

        public static readonly List<string> ColumnNames = new List<string>
        {
            "sewer_and_water",
            "power",
            "roads_and_bridges",
            "medical",
            "buildings",
            "shake_intensity",
            "location"
        };

        public MC1AggregateReport()
        {
            sumValues = new MC1Report(new List<int>(new int[MC1Report.ColumnNameToPositionDict.Count]));
            av = new List<float>(new float[MC1Report.ColumnNameToPositionDict.Count]);
            totalReportsAggregated = 0;
        }

        public MC1AggregateReport(List<MC1Report> reports)
        {
            foreach (MC1Report report in reports)
            {
                MC1Report nonNegativeReport = report.GetNonNegativeCopy();
                AddReport(report, nonNegativeReport);
            }
        }

        public void AddReport(MC1Report report, MC1Report nonNegativeReport)
        {
            for (int i = 0; i < nonNegativeReport.Count(); i++)
            {
                sumValues.WriteValue(i, sumValues.ReadValue(i) + report.ReadValue(i));
            }

            // Count the number of non-negative reports for each dimension.
            for (int i = 1; i < report.Count() - 1; i++)
            {
                if (report.ReadValue(i) >= 0)
                {
                    ColumnNameToValueCountDictionary[ColumnNames[i - 1]] =
                        ColumnNameToValueCountDictionary[ColumnNames[i - 1]] + 1;
                }
            }

            totalReportsAggregated += 1;

            RecomputeAverages();
        }

        private void RecomputeAverages()
        {
            for (int i = 0; i < MC1Report.ColumnNameToPositionDict.Count; i++)
            {
                var avg = (float) sumValues.ReadValue(i) / totalReportsAggregated;
                //average.WriteValue(i, avg);
                av[i] = avg;
            }
        }

        public MC1Report GetSum()
        {
            return sumValues;
        }

        public int GetSum(int columnIndex)
        {
            return sumValues.ReadValue(columnIndex);
        }

        public List<float> GetAverage()
        {
            return av;
        }

        public float GetAverage(int columnIndex)
        {
            return av[columnIndex];
        }

        public int GetAggregateCount()
        {
            return totalReportsAggregated;
        }

        public int GetNonNegativeReportCount(int columnIndex)
        {
            return ColumnNameToValueCountDictionary[ColumnNames[columnIndex]];
        }

        public float GetNonNegativeReportCountLogarithm(int columnIndex)
        {
            return (float) Math.Log(1 + ColumnNameToValueCountDictionary[ColumnNames[columnIndex]]);
        }
    }
}