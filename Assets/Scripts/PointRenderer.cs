using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Object = UnityEngine.Object;


// This script gets values from CSVReader script
// It instantiates points and particles according to values read

public class PointRenderer : MonoBehaviour
{

    //********Public Variables********

    // Bools for editor options
    public bool renderPointPrefabs = true;
    public bool renderParticles = true;
    public bool renderPrefabsWithColor = true;

    // Name of the input file, no extension
    public string inputfile;

    // Indices for columns to be assigned
    public int column1 = 1;
    public int column2 = 2;
    public int column3 = 3;
    // public int column4 = 3;

    // Full column names from CSV (as Dictionary Keys)
    public string xColumnName;
    public string yColumnName;
    public string zColumnName;
    public string tecColumnName;

    // Scale of particlePoints within graph, WARNING: Does not scale with graph frame.
    private float plotScale = 1;

    // Scale of the prefab particlePoints
    [Range(0.0f, 0.5f)]
    public float pointScale = 0.1f;

    // Changes size of particles generated
    [Range(0.0f, 2.0f)]
    public float particleScale = 5.0f;

    // The prefab for the data particlePoints that will be instantiated
    public GameObject PointPrefab;

    public GameObject PointPrefab2;

    public GameObject PointPrefab3;

    public GameObject PointPrefab4;

    public GameObject PointPrefab5;

    // Object which will contain instantiated prefabs in hiearchy
    public GameObject PointHolder;

    // Color for the glow around the particlePoints
    private Color GlowColor;

    //********Private Variables********
    // Minimum and maximum values of columns
    private float xMin;
    private float yMin;
    private float zMin;
    private float tecMin;

    private float xMax;
    private float yMax;
    private float zMax;
    private float tecMax;

    // Number of rows
    private int rowCount;

    // List for holding data from CSV reader
    private List<Dictionary<string, object>> pointList;

    // Particle system for holding point particles
    private ParticleSystem.Particle[] particlePoints;

    //********Methods********

    public void Awake()
    {
        //Run CSV Reader
        CSVReader csvReader = new CSVReader();
        pointList = csvReader.Read(inputfile);

        // Way too big
        pointScale /= 20;
    }

    // Use this for initialization
    public void Start()
    {
        // Store dictionary keys (column names in CSV) in a list
        List<string> columnList = new List<string>(pointList[1].Keys);

        Debug.Log("There are " + columnList.Count + " columns in the CSV");

        foreach (string key in columnList)
            Debug.Log("Column name is " + key);

        // Assign column names according to index indicated in columnList
        xColumnName = columnList[column1];
        yColumnName = columnList[column2];
        zColumnName = columnList[column3];
        // tecColumnName = columnList[column4];

        // Get maxes of each axis, using FindMaxValue method defined below
        xMax = FindMaxValue(xColumnName);
        yMax = FindMaxValue(yColumnName);
        zMax = FindMaxValue(zColumnName);
        // tecMax = FindMaxValue(tecColumnName);

        // Get minimums of each axis, using FindMinValue method defined below
        xMin = FindMinValue(xColumnName);
        yMin = FindMinValue(yColumnName);
        zMin = FindMinValue(zColumnName);
        // tecMin = FindMinValue(tecColumnName);

        // Debug.Log(xMin + " " + yMin + " " + zMin); // Write to console

        LateStart();

    }

    void LateStart() {
        StartCoroutine("build");
    }

    IEnumerator build() {
        yield return new WaitForSeconds(1);

        GameObject realParent = GameObject.Find("EarthSpherePrefab(Clone)");

        PointHolder = new GameObject("PointHolder");
        PointHolder.transform.parent = realParent.transform;
        PointHolder.transform.localScale = new Vector3(1, 1, 1);
        PointHolder.transform.localPosition = realParent.transform.position;

        PointHolder.transform.rotation = realParent.transform.rotation * Quaternion.Euler(7, -94, -2);

        AssignLabels();

        if (renderPointPrefabs == true)
        {
            // Call PlacePoint methods defined below
            PlacePrefabPoints();
        }

        // If statement to turn particles on and off
        if (renderParticles == true)
        {
            // Call CreateParticles() for particle system
            CreateParticles();

            // Set particle system, for point glow- depends on CreateParticles()
            GetComponent<ParticleSystem>().SetParticles(particlePoints, particlePoints.Length);
        }

    }


    // Update is called once per frame
    void Update()
    {
        //Activate Particle System
        //GetComponent<ParticleSystem>().SetParticles(particlePoints, particlePoints.Length);

    }


    void OnSelect()
    {
        inputfile = "14lt";
        for (var i = 0; i < pointList.Count; i++)
        {
            GameObject dataPoint = GameObject.Find(i.ToString());
            Destroy(dataPoint);
        }
    }
    
    public void DestroyDataPoints()
    {
        for (var i = 0; i < pointList.Count; i++)
        {
            GameObject dataPoint = GameObject.Find(i.ToString());
            //dataPoint.GetComponent<Renderer>().material.color = new Color(1.0f, 1.0f, 1.0f, 1.0f);
            Destroy(dataPoint);
        }
    }



    // Places the prefabs according to values read in
    private void PlacePrefabPoints()
    {

        // Get count (number of rows in table)
        rowCount = pointList.Count;

        for (var i = 0; i < pointList.Count; i++)
        {

            // float x = (float)Math.Acos((Convert.ToSingle(pointList[i][xColumnName])) / (xMax));
            // float y = (Convert.ToSingle(pointList[i][yColumnName]));
            // float z = (float)Math.Asin((Convert.ToSingle(pointList[i][zColumnName])) / (zMax));

            // This multiplication factor is the scale of the Earth's sphere
            float radius = 0.5f*2;
            
            var theta = (Convert.ToDouble(pointList[i][xColumnName]));
            var phi = (Convert.ToDouble(pointList[i][yColumnName]));
            Debug.Log("Phi: "+ phi);
            var R = (Convert.ToDouble(pointList[i][zColumnName]));
            R /= 2;
            
            var x = Convert.ToSingle(radius*R*Math.Cos((Math.PI / 180) *theta)*Math.Sin((Math.PI / 180) *(180-phi)));
            var y = Convert.ToSingle(radius*R*Math.Sin((Math.PI / 180) *theta));
            var z = Convert.ToSingle(radius*R*Math.Cos((Math.PI / 180) *theta)*Math.Cos((Math.PI / 180) *(180-phi)));

            
            // float x = (Convert.ToSingle(pointList[i][xColumnName])/xMax);
            // float y = (Convert.ToSingle(pointList[i][yColumnName])/yMax);
            // float z = (Convert.ToSingle(pointList[i][zColumnName])/zMax);
            // float tec = (Convert.ToSingle(pointList[i][tecColumnName])/tecMax);
            
            // Set x/y/z, standardized to between 0-1
            // float x = (Convert.ToSingle(pointList[i][xColumnName]) - xMin) / (xMax - xMin);
            // float y = (Convert.ToSingle(pointList[i][yColumnName]) - yMin) / (yMax - yMin);
            // float z = (Convert.ToSingle(pointList[i][zColumnName]) - zMin) / (zMax - zMin);

            // Create vector 3 for positioning particlePoints
            Vector3 position = new Vector3(x, y, z);
            // Vector3 position = new Vector3(x, (tec+y), z) * plotScale;
            
            //instantiate as gameobject variable so that it can be manipulated within loop
            //GameObject dataPoint = Instantiate(PointPrefab, Vector3.zero, Quaternion.identity);
            GameObject dataPoint = GameObject.CreatePrimitive(PrimitiveType.Cube);
        

            // Make child of PointHolder object, to keep particlePoints within container in hiearchy
            dataPoint.transform.parent = PointHolder.transform;

            // Position point at relative to parent
            dataPoint.transform.localPosition = position;

            dataPoint.transform.localScale = new Vector3(pointScale, pointScale, pointScale);

            // Converts index to string to name the point the index number
            string dataPointName = i.ToString();

            // Assigns name to the prefab
            dataPoint.transform.name = dataPointName;

            // TODO: Add spatial audio to object.
            // AudioSource audioSource = dataPoint.AddComponent<AudioSource>();
            // //audioSource.clip = Resources.Load("300hz_test_tone_pure_sine_wave") as AudioClip;
            // audioSource.clip = Resources.Load("sine-square-wobble") as AudioClip;
            // audioSource.loop = true;
            // audioSource.spatialBlend = 1.0f;
            // audioSource.volume = 0.5f * y;
            // audioSource.dopplerLevel = 5.0f;
            // audioSource.Play(0);

            if (renderPrefabsWithColor == true)
            {
                // Sets color according to x/y/z value
                dataPoint.GetComponent<Renderer>().material.color = new Color(x, y, z, 1.0f);

                // Activate emission color keyword so we can modify emission color
                dataPoint.GetComponent<Renderer>().material.EnableKeyword("_EMISSION");

                dataPoint.GetComponent<Renderer>().material.SetColor("_EmissionColor", new Color(x, y, z, 1.0f));

            }

        }

    }

    // creates particlePoints in the Particle System game object
    // 
    // 
    private void CreateParticles()
    {
        //pointList = CSVReader.Read(inputfile);

        rowCount = pointList.Count;
        // Debug.Log("Row Count is " + rowCount);

        particlePoints = new ParticleSystem.Particle[rowCount];

        for (int i = 0; i < pointList.Count; i++)
        {
            // Convert object from list into float
            float x = (Convert.ToSingle(pointList[i][xColumnName]) - xMin) / (xMax - xMin);
            float y = (Convert.ToSingle(pointList[i][yColumnName]) - yMin) / (yMax - yMin);
            float z = (Convert.ToSingle(pointList[i][zColumnName]) - zMin) / (zMax - zMin);

            // Debug.Log("Position is " + x + y + z);

            // Set point location
            particlePoints[i].position = new Vector3(x, y, z) * plotScale;

            //GlowColor = 
            // Set point color
            particlePoints[i].startColor = new Color(x, y, z, 1.0f);
            particlePoints[i].startSize = particleScale;
        }

    }

    // Finds labels named in scene, assigns values to their text meshes
    // WARNING: game objects need to be named within scene
    private void AssignLabels()
    {
        // Update point counter
        GameObject.Find("Point_Count").GetComponent<TextMesh>().text = pointList.Count.ToString("0");

        // Update title according to inputfile name
        if (inputfile == "iris")
        {
            GameObject.Find("Dataset_Label").GetComponent<TextMesh>().text = "Iris Dataset";
        } else
        {
            GameObject.Find("Dataset_Label").GetComponent<TextMesh>().text = "Ionospheric Electron Density at 250 km \n(at " + inputfile[6] + inputfile[7] + ":00:00 UTC)";
        }

        // Update axis titles to ColumnNames
        // GameObject.Find("X_Title").GetComponent<TextMesh>().text = xColumnName;
        // GameObject.Find("Y_Title").GetComponent<TextMesh>().text = yColumnName;
        // GameObject.Find("Z_Title").GetComponent<TextMesh>().text = zColumnName;

        // // Set x Labels by finding game objects and setting TextMesh and assigning value (need to convert to string)
        // GameObject.Find("X_Min_Lab").GetComponent<TextMesh>().text = xMin.ToString("0.0");
        // GameObject.Find("X_Mid_Lab").GetComponent<TextMesh>().text = (xMin + (xMax - xMin) / 2f).ToString("0.0");
        // GameObject.Find("X_Max_Lab").GetComponent<TextMesh>().text = xMax.ToString("0.0");

        // // Set y Labels by finding game objects and setting TextMesh and assigning value (need to convert to string)
        // GameObject.Find("Y_Min_Lab").GetComponent<TextMesh>().text = yMin.ToString("0.0");
        // GameObject.Find("Y_Mid_Lab").GetComponent<TextMesh>().text = (yMin + (yMax - yMin) / 2f).ToString("0.0");
        // GameObject.Find("Y_Max_Lab").GetComponent<TextMesh>().text = yMax.ToString("0.0");

        // // Set z Labels by finding game objects and setting TextMesh and assigning value (need to convert to string)
        // GameObject.Find("Z_Min_Lab").GetComponent<TextMesh>().text = zMin.ToString("0.0");
        // GameObject.Find("Z_Mid_Lab").GetComponent<TextMesh>().text = (zMin + (zMax - zMin) / 2f).ToString("0.0");
        // GameObject.Find("Z_Max_Lab").GetComponent<TextMesh>().text = zMax.ToString("0.0");

        // Display the available axes.
        //GameObject availableAxes = GameObject.Find("available_axes");
        //availableAxes.GetComponent<TextMesh>().text = "Available axes:";
        //List<string> columnList = new List<string>(pointList[1].Keys);
        
        //for (int i=0; i< columnList.Count; i++)
        //{
        //    if (columnList[i] == "")
        //    {
        //        continue;
        //    }

        //    // Instantiating/cloning the availableAxes game object.
        //    // Note: Calling the Instantiate does not clone the GameObject with all it's properties.
        //    GameObject axisGameObject = Instantiate(availableAxes);
        //    // Set the proper text.
        //    axisGameObject.GetComponent<TextMesh>().text = columnList[i];
        //    // Set the proper name so that multiple objects with the same name do not get created.
        //    axisGameObject.name = "available_axis_" + columnList[i];
        //    // Transform the object to the position of the availableObject.
        //    axisGameObject.transform.position = availableAxes.transform.position;
        //    // Scale the object to make it a bigger.
        //    axisGameObject.transform.localScale += new Vector3(0.1F, 0.1F, 0);
        //    // Move the object in the proper position.
        //    axisGameObject.transform.position = new Vector3(
        //        axisGameObject.transform.position.x,
        //        axisGameObject.transform.position.y - (0.5f + (i*5f/10f)),
        //        axisGameObject.transform.position.z
        //        );
        //}

    }

    //Method for finding max value, assumes PointList is generated
    private float FindMaxValue(string columnName)
    {
        //set initial value to first value
        float maxValue = Convert.ToSingle(pointList[0][columnName]);

        //Loop through Dictionary, overwrite existing maxValue if new value is larger
        for (var i = 0; i < pointList.Count; i++)
        {
            if (maxValue < Convert.ToSingle(pointList[i][columnName]))
                maxValue = Convert.ToSingle(pointList[i][columnName]);
        }

        //Spit out the max value
        return maxValue;
    }

    //Method for finding minimum value, assumes PointList is generated
    private float FindMinValue(string columnName)
    {
        //set initial value to first value
        float minValue = Convert.ToSingle(pointList[0][columnName]);

        //Loop through Dictionary, overwrite existing minValue if new value is smaller
        for (var i = 0; i < pointList.Count; i++)
        {
            if (Convert.ToSingle(pointList[i][columnName]) < minValue)
                minValue = Convert.ToSingle(pointList[i][columnName]);
        }

        return minValue;
    }

}