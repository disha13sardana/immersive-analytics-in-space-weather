using System;
using System.Collections.Generic;
using System.Linq;

namespace Scenes
{
    public class Report
    {
        private readonly List<int> values;

        public static readonly Dictionary<string, int> ColumnNameToPositionDict = new Dictionary<string, int>
        {
            {"sewer_and_water", 0},
            {"power", 1},
            {"roads_and_bridges", 2},
            {"medical", 3},
            {"buildings", 4},
            {"shake_intensity", 5},
            {"location", 6},
        };

        public Report(List<int> values)
        {
            if (values == null || values.Count == 0)
            {
                throw new Exception("Not allowed to assign an empty list.");
            }

            if (values.Count != 7)
            {
                throw new Exception("Invalid number of elements in the list.");
            }

            this.values = values;
        }

        public Report(IReadOnlyDictionary<string, object> report)
        {
            if (report == null || report.Count == 0)
            {
                throw new Exception("Dict is empty. Cannot initialize the constructor.");
            }

            if (report.Count != 8)
            {
                throw new Exception("Invalid number of elements in the list.");
            }

            values = new List<int>();

            var sewerAndWater = DataUtil.ParseToInt(report["sewer_and_water"]);
            values.Add(sewerAndWater);
            var power = DataUtil.ParseToInt(report["power"]);
            values.Add(power);
            var roadsAndBridges = DataUtil.ParseToInt(report["roads_and_bridges"]);
            values.Add(roadsAndBridges);
            var medical = DataUtil.ParseToInt(report["medical"]);
            values.Add(medical);
            var buildings = DataUtil.ParseToInt(report["buildings"]);
            values.Add(buildings);
            var shakeIntensity = DataUtil.ParseToInt(report["shake_intensity"]);
            values.Add(shakeIntensity);
            var location = DataUtil.ParseToInt(report["location"]);
            values.Add(location);
        }

        public int ReadValue(string columnName)
        {
            if (!ColumnNameToPositionDict.Keys.Contains(columnName))
            {
                throw new Exception("The specified column name is not recognized.");
            }

            var index = ColumnNameToPositionDict[columnName];
            return this.values[index];
        }

        public int ReadValue(int index)
        {
            if (index < 0 || index >= ColumnNameToPositionDict.Count)
            {
                throw new Exception("Invalid index.");
            }

            return values[index];
        }

        public void WriteValue(int index, int value)
        {
            if (index < 0 || index >= ColumnNameToPositionDict.Count)
            {
                throw new Exception("Invalid index.");
            }

            values[index] = value;
        }

        public int Count()
        {
            return values.Count;
        }

        public Report GetNonNegativeCopy()
        {
            List<int> nonNegativeValues = new List<int>();
            for (int i = 0; i < values.Count; i++)
            {
                if (values[i] < 0)
                {
                    nonNegativeValues.Add(0);
                }
                else
                {
                    nonNegativeValues.Add(values[i]);
                }
            }

            return new Report(nonNegativeValues);
        }

        public static Report operator +(Report report1, Report report2)
        {
            // Ensuring that report 1 is always lesser in length.
            if (report1.Count() > report2.Count())
            {
                Report temp = report1;
                report1 = report2;
                report2 = temp;
            }

            List<int> result = new List<int>();
            for (int i = 0; i < report1.Count(); i++)
            {
                int val2 = report2.values[i];
                int val1 = 0;
                if (i < report1.Count())
                {
                    val1 = report1.values[i];
                }

                result.Add(val1 + val2);
            }

            return new Report(result);
        }

        public List<int> GetAllValues()
        {
            return values;
        }

        public List<int> GetAllValuesDeepCopy()
        {
            return new List<int>(values);
        }
    }
}