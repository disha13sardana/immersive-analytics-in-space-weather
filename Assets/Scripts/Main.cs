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

        [SerializeField]
        private GameObject pressableButton2;


        public List<int> datasetNum = new List<int>();
        public int clicked = 0;


        [SerializeField]
        private GameObject solarCycleImage;


        public int soundMuted = 0;





        //void SceneSwitch(int dataSet)
        //{

        //    stormIndexDataSetName = "DataFiles/stormDay_SymIndex" + datasetNames[dataSet];
        //    currentDatasetIndex += 1;

        //    Debug.Log("Space is hit " + currentDatasetIndex + " " + stormIndexDataSetName);
        //    //Start();

        //}

        public void ChangeDataset()
        {
        //    Debug.Log("MRTK button Ran");
            clicked = 1;
        }

        public void MuteSound()
        {
            soundMuted = 1;
        }


    void Start()
        {


            for (int n = 0; n < 10; n++)
            {
                datasetNum.Add(n);
            }
            
            datasetLabelObject.transform.position = new Vector3(-0.11f, 0f, 1f);
            datasetLabelObject.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
            TextMesh datasetLabel = datasetLabelObject.GetComponent<TextMesh>();
            datasetLabel.text = "Start";

            pressableButton.transform.position = new Vector3(0f, 0.2f, 1f);
            pressableButton.transform.localEulerAngles = new Vector3(0f, 0f, 0f);

            datasetLabelObject.SetActive(true);
            pressableButton.SetActive(true);

            pressableButton2.transform.position = new Vector3(0.2f, 0.2f, 1f);
            pressableButton2.transform.localEulerAngles = new Vector3(0f, 0f, 0f);

            pressableButton2.SetActive(true);
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

                pressableButton2.SetActive(false);
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
                    int sunriseIndex = 0;
                    int sunsetIndex = 0;


                    switch (i)
                    {
                        case 1:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200402";
                            solarCycleImage.transform.position = new Vector3(-1.79f, 0.323f, 2.297f);
                            sunriseIndex = 725;
                            sunsetIndex = 1361;

                            break;
                        case 2:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_201110";
                            solarCycleImage.transform.position = new Vector3(-1.79f, 0.244f, 1.71f);
                            sunriseIndex = 686;
                            sunsetIndex = 1338;

                            break;
                        case 3:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200009";
                            solarCycleImage.transform.position = new Vector3(-1.79f, 0.198f, 2.57f);
                            sunriseIndex = 652;
                            sunsetIndex = 1393;

                            break;
                        case 4:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200010";
                            solarCycleImage.transform.position = new Vector3(-1.79f, 0.218f, 2.563f);
                            sunriseIndex = 691;
                            sunsetIndex = 1332;

                            break;
                        case 5:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200103";
                            solarCycleImage.transform.position = new Vector3(-1.79f, 0.183f, 2.532f);
                            sunriseIndex = 673;
                            sunsetIndex = 1399;

                            break;
                        case 6:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_201402";
                            solarCycleImage.transform.position = new Vector3(-1.79f, 0.215f, 1.528f);
                            sunriseIndex = 716;
                            sunsetIndex = 1369;

                            break;
                        case 7:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200204";
                            solarCycleImage.transform.position = new Vector3(-1.79f, 0.153f, 2.448f);
                            sunriseIndex = 629;
                            sunsetIndex = 1427;

                            break;
                        case 8:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_201303";
                            solarCycleImage.transform.position = new Vector3(-1.79f, 0.318f, 1.6f);
                            sunriseIndex = 676;
                            sunsetIndex = 1397;

                            break;
                        case 9:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200604";
                            solarCycleImage.transform.position = new Vector3(-1.79f, 0.36f, 2.137f);
                            sunriseIndex = 633;
                            sunsetIndex = 1424;

                            break;
                        default:
                            stormIndexDataSetName = "DataFiles/stormDay_SymIndex_200002";
                            solarCycleImage.transform.position = new Vector3(-1.79f, 0.183f, 2.614f);
                            sunriseIndex = 725;
                            sunsetIndex = 1361;

                            break;
                    }

                    solarCycleImage.SetActive(true);


                    datasetLabelObject.transform.position = new Vector3(1.68f, 0.73f, 0.85f);
                    datasetLabelObject.transform.localEulerAngles = new Vector3(0f, 90f, 0f);

                    pressableButton.transform.position = new Vector3(1.68f, 0.4f, 0.5f);
                    pressableButton.transform.localEulerAngles = new Vector3(0f, 90f, 0f);



                    var stormIndexDataSet = new StormIndexDataSet(stormIndexDataSetName);

                    TextMesh datasetLabel = datasetLabelObject.GetComponent<TextMesh>();
                    datasetLabel.text = "Dataset: " + stormIndexDataSetName.Substring(28, 6);






                    // Left sliding bar handle with line
                    LeftSlidingBarHandleModel leftSlidingBarHandleModel = new LeftSlidingBarHandleModel();
                    leftSlidingBarHandleModel.SerialId = 0;
                    leftSlidingBarHandleModel.CenterPosition = new Vector3(0f, 4f, 6f);
                    leftSlidingBarHandleModel.Scale = new Vector3(1.2f, 0.1f, 1.2f);
                    leftSlidingBarHandleModel.Rotation = new Vector3(90f, 180f, 0f);
                    leftSlidingBarHandleModel.StormIndexDataSet = stormIndexDataSet;
                    leftSlidingBarHandleModel.Label = "" + stormIndexDataSet.earliestTimeStamp;
                    leftSlidingBarHandleController = Controller.Instantiate<LeftSlidingBarHandleController>(
                        LeftSlidingBarHandleModel.PrefabName, leftSlidingBarHandleModel, transform);

                    // Right sliding bar handle
                    RightSlidingBarHandleModel rightSlidingBarHandleModel = new RightSlidingBarHandleModel();
                    rightSlidingBarHandleModel.SerialId = 0;

                    //rightSlidingBarHandleModel.CenterPosition = new Vector3(-4.5f, -6.6f, -58f);
                    rightSlidingBarHandleModel.CenterPosition = new Vector3(0f, 4f, -52f);

                    rightSlidingBarHandleModel.Scale = new Vector3(1.2f, 0.1f, 1.2f);
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
                    slicingPlaneModel.Position = new Vector3(0f, 4f, 1.5f);
                    slicingPlaneModel.Scale = new Vector3(0.5f, 0.5f, 0.5f);
                    slicingPlaneModel.Rotation = new Vector3(90f, 0f, -90f);
                    slicingPlaneModel.StormIndexDataSet = stormIndexDataSet;
                    slicingPlaneModel.lowerZBound = leftSlidingBarHandleModel.CenterPosition.z - 0.3f;
                    slicingPlaneModel.upperZBound = rightSlidingBarHandleModel.CenterPosition.z;
                    slicingPlaneModel.sunriseIndex = sunriseIndex;
                    slicingPlaneModel.sunsetIndex = sunsetIndex;
                    slicingPlaneModel.SoundMuted = soundMuted;
                    // slicingPlaneModel.Label = "SYM-H Index (nT) at 23:59:00 hrs";
                    slicingPlaneController = Controller.Instantiate<SlicingPlaneController>(SlicingPlaneModel.PrefabName, slicingPlaneModel, transform);

                    // Earth (sphere) 
                    //EarthSphereModel earthSphereModel = new EarthSphereModel();
                    //earthSphereModel.SerialId = 0;
                    //earthSphereModel.CenterPosition = new Vector3(0f, 0f, 20f);
                    //earthSphereModel.Scale = new Vector3(0.06f, 0.06f, 0.06f);
                    //earthSphereModel.Rotation = new Vector3(90f, 0f, 90f);
                    //earthSphereModel.PointList = pointList;
                    //earthSphereModel.Mc1Data = mc1Data;
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
                    datasetLabelObject.transform.position = new Vector3(1.68f, 0.73f, 0.85f);
                    TextMesh datasetLabel = datasetLabelObject.GetComponent<TextMesh>();
                    datasetLabel.text = "Start Again";

                    solarCycleImage.SetActive(false);

                    //pressableButton.transform.position = new Vector3(0f, 1f, 1f);
                    //pressableButton.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
                }
            }

        }
        
    }
}