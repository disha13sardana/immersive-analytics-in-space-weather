using System;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;

namespace Scenes
{
    public class AggregateReport
    {
        private readonly Report sumValues = new Report(new List<int>(new int[Report.ColumnNameToPositionDict.Count]));

//        private readonly Report average = new Report(new List<int>(new int[Report.ColumnNameToPositionDict.Count]));
        private List<float> av = new List<float>(new float[Report.ColumnNameToPositionDict.Count]);
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

        public AggregateReport()
        {
            sumValues = new Report(new List<int>(new int[Report.ColumnNameToPositionDict.Count]));
            av = new List<float>(new float[Report.ColumnNameToPositionDict.Count]);
            totalReportsAggregated = 0;
        }

        public AggregateReport(List<Report> reports)
        {
            foreach (Report report in reports)
            {
                Report nonNegativeReport = report.GetNonNegativeCopy();
                AddReport(report, nonNegativeReport);
            }
        }

        public void AddReport(Report report, Report nonNegativeReport)
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
            for (int i = 0; i < Report.ColumnNameToPositionDict.Count; i++)
            {
                var avg = (float) sumValues.ReadValue(i) / totalReportsAggregated;
                //average.WriteValue(i, avg);
                av[i] = avg;
            }
        }

        public Report GetSum()
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