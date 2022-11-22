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

        private string stormIndexDataSetName = "DataFiles/symh_dtec_02-11-2004";

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



        [SerializeField]
        private GameObject p022004;

        [SerializeField]
        private GameObject p022000;

        [SerializeField]
        private GameObject p032012;


        [SerializeField]
        private GameObject p032013;

        [SerializeField]
        private GameObject p032015;

        [SerializeField]
        private GameObject p032001;

        [SerializeField]
        private GameObject p042006;

        [SerializeField]
        private GameObject p042002;

        [SerializeField]
        private GameObject p042001;

        [SerializeField]
        private GameObject p082005;

        [SerializeField]
        private GameObject p082004;

        [SerializeField]
        private GameObject p092002;

        [SerializeField]
        private GameObject p092005;

        [SerializeField]
        private GameObject p102016;

        [SerializeField]
        private GameObject p102001;



        public int soundMuted = 0;

        private int numOfDatasets = 10;




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

        private float ComputeVolume(float value)
        {
            float minimumDataValue = -234f;
            float maximumDataValue = -107f;
            float minimumVolume = 0.1f;
            float maximumVolume = 1.0f;

            float volumeValue = (-((value - minimumDataValue) / (maximumDataValue - minimumDataValue))) * (maximumVolume - minimumVolume) + maximumVolume;


            return volumeValue;
        }

        private float ComputePitch(float value)
        {
            //   float pitch = 1; // default
            float semitone = 1.05946f;  // this is 2^(1/12) = 1 semitone = approx value taken
            float exponent = 1;

            switch (value)
            {
                case 33.4f:
                    exponent = -9f;
                    break;
                case 37.2f:
                    exponent = -9f;
                    break;
                case 50.3f:
                    exponent = -8f;
                    break;
                case 54.5f:
                    exponent = -7f;
                    break;
                case 60.5f:
                    exponent = -6f;
                    break;
                case 69.7f:
                    exponent = -5f;
                    break;
                case 74.6f:
                    exponent = -4f;
                    break;
                case 78.3f:
                    exponent = -3f;
                    break;
                case 86.6f:
                    exponent = -2f;
                    break;
                case 161.7f:
                    exponent = -1f;
                    break;
                case 165.7f:
                    exponent = 0f;
                    break;
                case 186.9f:
                    exponent = 1f;
                    break;
                case 187.9f:
                    exponent = 1f;
                    break;
                case 194.1f:
                    exponent = 2f;
                    break;

            }

            //float minimumDataValue = 33.4f;
            //float maximumDataValue = 194.1f;
            //float minimumExponent = -24f;   // A2 = 110hz
            //float maximumExponent = 0f;      // A4 == 440hz

            // exponent = ((value - maximumDataValue) / (minimumDataValue - maximumDataValue)) * (minimumExponent - maximumExponent);
            // Debug.Log(Convert.ToSingle(Math.Pow(semitone, exponent)));
            return Convert.ToSingle(Math.Pow(semitone, exponent));
        }


        void Start()
        {


            for (int n = 0; n < numOfDatasets; n++)
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

                solarCycleImage.SetActive(true);

                pressableButton2.SetActive(false);

                solarCycleImage.GetComponent<AudioSource>().volume = 0f;
                //SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
                //Debug.Log("R is hit");
                foreach (Transform child in transform)
                {
                    Destroy(child.gameObject);
                }
                //SceneSwitch(currentDatasetIndex);




                if (datasetNum.Count > 0)
                {

                    int index = UnityEngine.Random.Range(0, datasetNum.Count);
                    int i = datasetNum[index];
                    // Debug.Log("Index : " + i);
                    datasetNum.RemoveAt(index);
                    int sunriseIndex = 0;
                    int sunsetIndex = 0;


                    switch (i)
                    {
                        //case 1:
                        //stormIndexDataSetName = "DataFiles/symh_dtec_02-11-2004";
                        //solarCycleImage.transform.position = new Vector3(-1.782f, 0.345f, 2.365f);
                        //solarCycleImage.GetComponent<AudioSource>().volume = ComputeVolume(-107f);
                        //p022004.GetComponent<AudioSource>().pitch = ComputePitch(74.6f);
                        //p022004.SetActive(true);
                        //sunriseIndex = 919;
                        //sunsetIndex = 1531;

                        //break;
                        case 1:
                            stormIndexDataSetName = "DataFiles/symh_dtec_02-12-2000";
                            solarCycleImage.transform.position = new Vector3(-1.782f, 0.165f, 2.74f);
                            solarCycleImage.GetComponent<AudioSource>().volume = ComputeVolume(-165f);
                            p022000.GetComponent<AudioSource>().pitch = ComputePitch(165.7f);
                            p022000.SetActive(true);

                            sunriseIndex = 918;
                            sunsetIndex = 1533;

                            break;
                        case 2:
                            stormIndexDataSetName = "DataFiles/symh_dtec_03-09-2012";
                            solarCycleImage.transform.position = new Vector3(-1.782f, 0.325f, 1.615f);
                            solarCycleImage.GetComponent<AudioSource>().volume = ComputeVolume(-150f);
                            p032012.GetComponent<AudioSource>().pitch = ComputePitch(86.6f);
                            p032012.SetActive(true);
                            sunriseIndex = 873;
                            sunsetIndex = 1569;

                            break;
                        case 3:
                            stormIndexDataSetName = "DataFiles/symh_dtec_03-17-2013";
                            solarCycleImage.transform.position = new Vector3(-1.782f, 0.34f, 1.52f);
                            solarCycleImage.GetComponent<AudioSource>().volume = ComputeVolume(-132f);
                            p032013.GetComponent<AudioSource>().pitch = ComputePitch(78.3f);
                            p032013.SetActive(true);
                            sunriseIndex = 859;
                            sunsetIndex = 1580;

                            break;
                        case 4:
                            stormIndexDataSetName = "DataFiles/symh_dtec_03-17-2015";
                            solarCycleImage.transform.position = new Vector3(-1.782f, 0.345f, 1.328f);
                            solarCycleImage.GetComponent<AudioSource>().volume = ComputeVolume(-234f);
                            p032015.GetComponent<AudioSource>().pitch = ComputePitch(54.5f);
                            p032015.SetActive(true);
                            sunriseIndex = 860;
                            sunsetIndex = 1579;

                            break;
                        case 5:
                            //stormIndexDataSetName = "DataFiles/symh_dtec_03-31-2001";
                            //solarCycleImage.transform.position = new Vector3(-1.782f, 0.215f, 1.528f);
                            //solarCycleImage.GetComponent<AudioSource>().volume = .30f;
                            //p032001.GetComponent<AudioSource>().pitch = ComputePitch(187.9f);
                            //p032001.SetActive(true);
                            //sunriseIndex = 716;
                            //sunsetIndex = 1369;

                            stormIndexDataSetName = "DataFiles/symh_dtec_10-28-2001";
                            solarCycleImage.transform.position = new Vector3(-1.782f, 0.115f, 2.588f);
                            solarCycleImage.GetComponent<AudioSource>().volume = ComputeVolume(-150f);
                            p102001.GetComponent<AudioSource>().pitch = ComputePitch(194.1f);
                            p102001.SetActive(true);
                            sunriseIndex = 885;
                            sunsetIndex = 1503;

                            break;


                       //case 7:
                            //stormIndexDataSetName = "DataFiles/symh_dtec_04-14-2006";
                            //solarCycleImage.transform.position = new Vector3(-1.782f, 0.39f, 2.165f);
                            //solarCycleImage.GetComponent<AudioSource>().volume = ComputeVolume(-111f);
                            //p042006.GetComponent<AudioSource>().pitch = ComputePitch(50.3f);
                            //p042006.SetActive(true);
                            //sunriseIndex = 807;
                            //sunsetIndex = 1616;

                            //break;
                        case 6:
                            stormIndexDataSetName = "DataFiles/symh_dtec_04-17-2002";
                            solarCycleImage.transform.position = new Vector3(-1.782f, 0.12f, 2.54f);
                            solarCycleImage.GetComponent<AudioSource>().volume = ComputeVolume(-151f);
                            p042002.GetComponent<AudioSource>().pitch = ComputePitch(186.9f);
                            p042002.SetActive(true);
                            sunriseIndex = 802;
                            sunsetIndex = 1620;

                            break;
                        case 7:
                            stormIndexDataSetName = "DataFiles/symh_dtec_04-18-2001";
                            solarCycleImage.transform.position = new Vector3(-1.782f, 0.18f, 2.6f);
                            solarCycleImage.GetComponent<AudioSource>().volume = ComputeVolume(-122f);
                            p042001.GetComponent<AudioSource>().pitch = ComputePitch(161.7f);
                            p042001.SetActive(true);
                            sunriseIndex = 799;
                            sunsetIndex = 1621;

                            break;
                        case 8:
                            stormIndexDataSetName = "DataFiles/symh_dtec_08-24-2005";
                            solarCycleImage.transform.position = new Vector3(-1.782f, 0.37f, 2.23f);
                            solarCycleImage.GetComponent<AudioSource>().volume = ComputeVolume(-179f);
                            p082005.GetComponent<AudioSource>().pitch = ComputePitch(60.5f);
                            p082005.SetActive(true);
                            sunriseIndex = 803;
                            sunsetIndex = 1622;

                            break;
                      //case 11:
                            //stormIndexDataSetName = "DataFiles/symh_dtec_08-30-2004";
                            //solarCycleImage.transform.position = new Vector3(-1.782f, 0.36f, 2.32f);
                            //solarCycleImage.GetComponent<AudioSource>().volume = ComputeVolume(-128f);
                            //p082004.GetComponent<AudioSource>().pitch = ComputePitch(69.7);
                            //p082004.SetActive(true);
                            //sunriseIndex = 810;
                            //sunsetIndex = 1611;

                            //break;
                        case 9:
                            stormIndexDataSetName = "DataFiles/symh_dtec_09-04-2002";
                            solarCycleImage.transform.position = new Vector3(-1.782f, 0.12f, 2.5f);
                            solarCycleImage.GetComponent<AudioSource>().volume = ComputeVolume(-109f);
                            p092002.GetComponent<AudioSource>().pitch = ComputePitch(187.9f);
                            p092002.SetActive(true);
                            sunriseIndex = 816;
                            sunsetIndex = 1603;

                            break;
                        default:
                            stormIndexDataSetName = "DataFiles/symh_dtec_09-11-2005";
                            solarCycleImage.transform.position = new Vector3(-1.782f, 0.42f, 2.22f);
                            solarCycleImage.GetComponent<AudioSource>().volume = ComputeVolume(-137f);
                            p092005.GetComponent<AudioSource>().pitch = ComputePitch(37.2f);
                            p092005.SetActive(true);
                            sunriseIndex = 824;
                            sunsetIndex = 1589;

                            break;
                    //default:
                    //    stormIndexDataSetName = "DataFiles/symh_dtec_10-13-2016";
                    //    solarCycleImage.transform.position = new Vector3(-1.782f, 0.43f, 1.19f);
                    //    solarCycleImage.GetComponent<AudioSource>().volume = ComputeVolume(-114f);
                    //    p102016.GetComponent<AudioSource>().pitch = ComputePitch(33.4f);
                    //    p102016.SetActive(true);
                    //    sunriseIndex = 865;
                    //    sunsetIndex = 1528;

                    //    break;

                }




                    datasetLabelObject.transform.position = new Vector3(1.68f, 0.73f, 0.85f);
                    datasetLabelObject.transform.localEulerAngles = new Vector3(0f, 90f, 0f);

                    pressableButton.transform.position = new Vector3(1.68f, 0.4f, 0.5f);
                    pressableButton.transform.localEulerAngles = new Vector3(0f, 90f, 0f);

                    TextMesh datasetLabel = datasetLabelObject.GetComponent<TextMesh>();
                    datasetLabel.text = "Dataset: " + stormIndexDataSetName.Substring(20, 10);

                    var stormIndexDataSet = new StormIndexDataSet(stormIndexDataSetName);

                   

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
                    for (int n = 0; n < numOfDatasets; n++)
                    {
                        datasetNum.Add(n);
                    }

                    //datasetLabelObject.transform.position = new Vector3(-0.7f, 0.8f, 1f);
                    //datasetLabelObject.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
                    datasetLabelObject.transform.position = new Vector3(1.68f, 0.73f, 0.85f);
                    TextMesh datasetLabel = datasetLabelObject.GetComponent<TextMesh>();
                    datasetLabel.text = "Start Again";

                    // solarCycleImage.SetActive(false);

                    //pressableButton.transform.position = new Vector3(0f, 1f, 1f);
                    //pressableButton.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
                }
            }

        }
        
    }
}