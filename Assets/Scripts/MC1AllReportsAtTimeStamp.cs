using System;
using System.Collections.Generic;
using Scenes;

public class MC1AllReportsAtTimeStamp
{
    private DateTime timeStamp;

    private Dictionary<int, List<MC1Report>> locationToReportsMap = new Dictionary<int, List<MC1Report>>
    {
        {1, new List<MC1Report>()},
        {2, new List<MC1Report>()},
        {3, new List<MC1Report>()},
        {4, new List<MC1Report>()},
        {5, new List<MC1Report>()},
        {6, new List<MC1Report>()},
        {7, new List<MC1Report>()},
        {8, new List<MC1Report>()},
        {9, new List<MC1Report>()},
        {10, new List<MC1Report>()},
        {11, new List<MC1Report>()},
        {12, new List<MC1Report>()},
        {13, new List<MC1Report>()},
        {14, new List<MC1Report>()},
        {15, new List<MC1Report>()},
        {16, new List<MC1Report>()},
        {17, new List<MC1Report>()},
        {18, new List<MC1Report>()},
        {19, new List<MC1Report>()}
    };

    private Dictionary<int, MC1AggregateReport> locationToAggregateReportsMap =
        new Dictionary<int, MC1AggregateReport>
        {
            {1, new MC1AggregateReport()},
            {2, new MC1AggregateReport()},
            {3, new MC1AggregateReport()},
            {4, new MC1AggregateReport()},
            {5, new MC1AggregateReport()},
            {6, new MC1AggregateReport()},
            {7, new MC1AggregateReport()},
            {8, new MC1AggregateReport()},
            {9, new MC1AggregateReport()},
            {10, new MC1AggregateReport()},
            {11, new MC1AggregateReport()},
            {12, new MC1AggregateReport()},
            {13, new MC1AggregateReport()},
            {14, new MC1AggregateReport()},
            {15, new MC1AggregateReport()},
            {16, new MC1AggregateReport()},
            {17, new MC1AggregateReport()},
            {18, new MC1AggregateReport()},
            {19, new MC1AggregateReport()}
        };

    public MC1AllReportsAtTimeStamp(DateTime timeStamp)
    {
        this.timeStamp = timeStamp;
    }

    public MC1AllReportsAtTimeStamp(DateTime timeStamp, Dictionary<int, List<MC1Report>> locationToReportsMap)
    {
        this.timeStamp = timeStamp;
        this.locationToReportsMap = locationToReportsMap;
        foreach (KeyValuePair<int, List<MC1Report>> keyValuePair in this.locationToReportsMap)
        {
            int location = keyValuePair.Key;
            List<MC1Report> reportsFromThatLocation = keyValuePair.Value;
            locationToAggregateReportsMap[location] = new MC1AggregateReport(reportsFromThatLocation);
        }
    }

    public void AddReport(int location, MC1Report report)
    {
        if (location > 19 || location < 1)
        {
            throw new Exception("Location value should be between 1 and 19. Inclusive of both.");
        }

        if (report == null)
        {
            throw new Exception("Passed report is null.");
        }

        MC1Report nonNegativeReport = report.GetNonNegativeCopy();

        locationToReportsMap[location].Add(nonNegativeReport);
        locationToAggregateReportsMap[location].AddReport(report, nonNegativeReport);
    }

    public List<MC1Report> GetReports(int location)
    {
        return locationToReportsMap[location];
    }

    public MC1AggregateReport GetAggregateReport(int location)
    {
        return locationToAggregateReportsMap[location];
    }

    public DateTime GetDateTime()
    {
        return timeStamp;
    }
}