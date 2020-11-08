using System;
using System.Collections.Generic;
using Scenes;

public class AllReportsAtTimeStamp
{
    private DateTime timeStamp;

    private Dictionary<int, List<Report>> locationToReportsMap = new Dictionary<int, List<Report>>
    {
        {1, new List<Report>()}
    };

    private Dictionary<int, AggregateReport> locationToAggregateReportsMap =
        new Dictionary<int, AggregateReport>
        {
            {1, new AggregateReport()}
        };

    public AllReportsAtTimeStamp(DateTime timeStamp)
    {
        this.timeStamp = timeStamp;
    }

    public AllReportsAtTimeStamp(DateTime timeStamp, Dictionary<int, List<Report>> locationToReportsMap)
    {
        this.timeStamp = timeStamp;
        this.locationToReportsMap = locationToReportsMap;
        foreach (KeyValuePair<int, List<Report>> keyValuePair in this.locationToReportsMap)
        {
            int location = keyValuePair.Key;
            List<Report> reportsFromThatLocation = keyValuePair.Value;
            locationToAggregateReportsMap[location] = new AggregateReport(reportsFromThatLocation);
        }
    }

    public void AddReport(int location, Report report)
    {
        if (location != 1)
        {
            throw new Exception("Location value should be 1, since storm indexes are global.");
        }

        if (report == null)
        {
            throw new Exception("Passed report is null.");
        }

        Report nonNegativeReport = report.GetNonNegativeCopy();

        locationToReportsMap[location].Add(nonNegativeReport);
        locationToAggregateReportsMap[location].AddReport(report, nonNegativeReport);
    }

    public List<Report> GetReports(int location)
    {
        return locationToReportsMap[location];
    }

    public AggregateReport GetAggregateReport(int location)
    {
        return locationToAggregateReportsMap[location];
    }

    public DateTime GetDateTime()
    {
        return timeStamp;
    }
}