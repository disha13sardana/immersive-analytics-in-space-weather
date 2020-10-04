using System;
using System.Collections.Generic;
using Scenes;

public class AllReportsAtTimeStamp
{
    private DateTime timeStamp;

    private Dictionary<int, List<Report>> locationToReportsMap = new Dictionary<int, List<Report>>
    {
        {1, new List<Report>()},
        {2, new List<Report>()},
        {3, new List<Report>()},
        {4, new List<Report>()},
        {5, new List<Report>()},
        {6, new List<Report>()},
        {7, new List<Report>()},
        {8, new List<Report>()},
        {9, new List<Report>()},
        {10, new List<Report>()},
        {11, new List<Report>()},
        {12, new List<Report>()},
        {13, new List<Report>()},
        {14, new List<Report>()},
        {15, new List<Report>()},
        {16, new List<Report>()},
        {17, new List<Report>()},
        {18, new List<Report>()},
        {19, new List<Report>()}
    };

    private Dictionary<int, AggregateReport> locationToAggregateReportsMap =
        new Dictionary<int, AggregateReport>
        {
            {1, new AggregateReport()},
            {2, new AggregateReport()},
            {3, new AggregateReport()},
            {4, new AggregateReport()},
            {5, new AggregateReport()},
            {6, new AggregateReport()},
            {7, new AggregateReport()},
            {8, new AggregateReport()},
            {9, new AggregateReport()},
            {10, new AggregateReport()},
            {11, new AggregateReport()},
            {12, new AggregateReport()},
            {13, new AggregateReport()},
            {14, new AggregateReport()},
            {15, new AggregateReport()},
            {16, new AggregateReport()},
            {17, new AggregateReport()},
            {18, new AggregateReport()},
            {19, new AggregateReport()}
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
        if (location > 19 || location < 1)
        {
            throw new Exception("Location value should be between 1 and 19. Inclusive of both.");
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