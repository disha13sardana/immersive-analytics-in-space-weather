using System;
using System.Collections.Generic;
using UnityEngine;
using CodeControl;
using System.Xml.Linq;
using System.Linq;
using System.Data;
using UnityEngine.SceneManagement;


namespace Scenes
{
    public class Main : MonoBehaviour
    {
        private LeftSlidingBarHandleController leftSlidingBarHandleController;
        private RightSlidingBarHandleController rightSlidingBarHandleController;
        private EarthSphereController earthSphereController;
        private SlicingPlaneController slicingPlaneController;
        
        private List<Dictionary<string, object>> pointList;
        // private StormIndexData stormIndexData;

        [SerializeField]
        private float CMVScale = 0.3f;

        private string stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200002";

        [SerializeField]
        private GameObject datasetLabelObject;

        [SerializeField]
        private GameObject pressableButton;

        public List<int> datasetNum = new List<int>();
        public int clicked = 0;

      

        

    //void SceneSwitch(int dataSet)
    //{

    //    stormIndexDataSetName = "DataFiles/stormDay_SymIndex" + datasetNames[dataSet];
    //    currentDatasetIndex += 1;

    //    Debug.Log("Space is hit " + currentDatasetIndex + " " + stormIndexDataSetName);
    //    //Start();

    //}

        public void ChangeDataset()
        {
            Debug.Log("MRTK button Ran");
            clicked = 1;
        }


    void Start()
        {

            for (int n = 0; n < 10; n++)
            {
                datasetNum.Add(n);
            }
            
            datasetLabelObject.transform.position = new Vector3(-0.7f, 0.8f, 1f);
            datasetLabelObject.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
            TextMesh datasetLabel = datasetLabelObject.GetComponent<TextMesh>();
            datasetLabel.text = "Click This Button to Start";

            pressableButton.transform.position = new Vector3(0f, 1f, 1f);
            pressableButton.transform.localEulerAngles = new Vector3(0f, 0f, 0f);

            datasetLabelObject.SetActive(true);
            pressableButton.SetActive(true);

            //SpatialMapping.Instance.DrawVisualMeshes = false;

            // pointList = CSVReader.Read("mc1_clean");
            // mc1Data = new Mc1Data("mc1_processed_neg_1");

            // TODO Why does this exist?
            // pointList = CSVReader.Read("storm_day_sym_index"); <- old one



        }

        // Update is called once per frame
        void Update()
        {

            if (clicked == 1)
            {
                clicked = 0;
                //SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
                Debug.Log("R is hit");
                foreach (Transform child in transform)
                {
                    Destroy(child.gameObject);
                }
                //SceneSwitch(currentDatasetIndex);




                if (datasetNum.Count > 0)
                {

                    int index = UnityEngine.Random.Range(0, datasetNum.Count);
                    int i = datasetNum[index];
                    Debug.Log("Index : " + i);
                    datasetNum.RemoveAt(index);


                    switch (i)
                    {
                        case 1:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200402";
                            break;
                        case 2:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200004";
                            break;
                        case 3:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200009";
                            break;
                        case 4:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200010";
                            break;
                        case 5:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200103";
                            break;
                        case 6:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200104";
                            break;
                        case 7:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200204";
                            break;
                        case 8:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_201303";
                            break;
                        case 9:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200108";
                            break;
                        default:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200002";
                            break;
                    }


                    datasetLabelObject.transform.position = new Vector3(-1.8f, 1.3f, 1.7f);
                    datasetLabelObject.transform.localEulerAngles = new Vector3(0f, -90f, 0f);

                    pressableButton.transform.position = new Vector3(-1.8f, 0.5f, 1.5f);
                    pressableButton.transform.localEulerAngles = new Vector3(0f, -90f, 0f);

                    var stormIndexDataSet = new StormIndexDataSet(stormIndexDataSetName);

                    TextMesh datasetLabel = datasetLabelObject.GetComponent<TextMesh>();
                    datasetLabel.text = "Dataset: " + stormIndexDataSetName.Substring(28, 6);






                    // Left sliding bar handle with line
                    LeftSlidingBarHandleModel leftSlidingBarHandleModel = new LeftSlidingBarHandleModel();
                    leftSlidingBarHandleModel.SerialId = 0;
                    leftSlidingBarHandleModel.CenterPosition = new Vector3(0f, 10f, 6f);
                    leftSlidingBarHandleModel.Scale = new Vector3(1f, 0.1f, 1f);
                    leftSlidingBarHandleModel.Rotation = new Vector3(90f, 180f, 0f);
                    leftSlidingBarHandleModel.StormIndexDataSet = stormIndexDataSet;
                    leftSlidingBarHandleModel.Label = "" + stormIndexDataSet.earliestTimeStamp;
                    leftSlidingBarHandleController = Controller.Instantiate<LeftSlidingBarHandleController>(
                        LeftSlidingBarHandleModel.PrefabName, leftSlidingBarHandleModel, transform);

                    // Right sliding bar handle
                    RightSlidingBarHandleModel rightSlidingBarHandleModel = new RightSlidingBarHandleModel();
                    rightSlidingBarHandleModel.SerialId = 0;

                    //rightSlidingBarHandleModel.CenterPosition = new Vector3(-4.5f, -6.6f, -58f);
                    rightSlidingBarHandleModel.CenterPosition = new Vector3(0f, 10f, -52f);

                    rightSlidingBarHandleModel.Scale = new Vector3(1f, 0.1f, 1f);
                    rightSlidingBarHandleModel.Rotation = new Vector3(90f, 0f, 0f);
                    rightSlidingBarHandleModel.StormIndexDataSet = stormIndexDataSet;
                    rightSlidingBarHandleModel.Label = "" + stormIndexDataSet.lastTimeStamp;
                    rightSlidingBarHandleController = Controller.Instantiate<RightSlidingBarHandleController>(
                        RightSlidingBarHandleModel.PrefabName, rightSlidingBarHandleModel, transform);
                    // var transform1 = transform;
                    // var transformEulerAngles = transform1.eulerAngles;
                    // transformEulerAngles.y = -90;
                    // transform1.eulerAngles = transformEulerAngles;


                    // Slicing Plane
                    SlicingPlaneModel slicingPlaneModel = new SlicingPlaneModel();
                    slicingPlaneModel.SerialId = 0;
                    //rightSlidingBarHandleModel.CenterPosition = new Vector3(-4.5f, -6.6f, -58f);
                    slicingPlaneModel.Position = new Vector3(0f, 10f, -45f);
                    slicingPlaneModel.Scale = new Vector3(0.5f, 0.5f, 0.5f);
                    slicingPlaneModel.Rotation = new Vector3(90f, 0f, -90f);
                    slicingPlaneModel.StormIndexDataSet = stormIndexDataSet;
                    slicingPlaneModel.lowerZBound = leftSlidingBarHandleModel.CenterPosition.z;
                    slicingPlaneModel.upperZBound = rightSlidingBarHandleModel.CenterPosition.z;
                    // slicingPlaneModel.Label = "SYM-H Index (nT) at 23:59:00 hrs";
                    slicingPlaneController = Controller.Instantiate<SlicingPlaneController>(SlicingPlaneModel.PrefabName, slicingPlaneModel, transform);

                    //// Earth (sphere) 
                    //EarthSphereModel earthSphereModel = new EarthSphereModel();
                    //earthSphereModel.SerialId = 0;
                    //earthSphereModel.CenterPosition = new Vector3(0f, 0f, 20f);
                    //earthSphereModel.Scale = new Vector3(0.06f, 0.06f, 0.06f);
                    //earthSphereModel.Rotation = new Vector3(90f, 0f, 90f);
                    //earthSphereModel.PointList = pointList;
                    //// earthSphereModel.Mc1Data = mc1Data;
                    //earthSphereModel.ScaleDataColumnIndex = 1;
                    //earthSphereModel.ColorDataColumnIndex = 1;
                    //earthSphereModel.AmbientAudioDataColumnIndex = 1;
                    //earthSphereModel.PlotName = "TEC";
                    //earthSphereModel.visibility = false;
                    //earthSphereController =
                    //    Controller.Instantiate<EarthSphereController>(EarthSphereModel.PrefabName,
                    //        earthSphereModel, transform);
                }
                else
                {
                    for (int n = 0; n < 10; n++)
                    {
                        datasetNum.Add(n);
                    }

                    //datasetLabelObject.transform.position = new Vector3(-0.7f, 0.8f, 1f);
                    //datasetLabelObject.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
                    datasetLabelObject.transform.position = new Vector3(-1.8f, 0.85f, 0.9f);
                    TextMesh datasetLabel = datasetLabelObject.GetComponent<TextMesh>();
                    datasetLabel.text = "Click This Button to Start";

                    //pressableButton.transform.position = new Vector3(0f, 1f, 1f);
                    //pressableButton.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
                }
            }

        }
        
    }
}