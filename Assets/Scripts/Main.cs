using System;
using System.Collections.Generic;
using UnityEngine;
using CodeControl;
using System.Xml.Linq;

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
        [SerializeField]
        private String stormIndexDataSetName = "DataFiles/stormDay_SymIndex";

        void Start()
        {
            //SpatialMapping.Instance.DrawVisualMeshes = false;

            // pointList = CSVReader.Read("mc1_clean");
            // mc1Data = new Mc1Data("mc1_processed_neg_1");
            
            // TODO Why does this exist?
            // pointList = CSVReader.Read("storm_day_sym_index"); <- old one
            var stormIndexDataSet = new StormIndexDataSet(stormIndexDataSetName);

            // Left sliding bar handle with line
            LeftSlidingBarHandleModel leftSlidingBarHandleModel = new LeftSlidingBarHandleModel();
            leftSlidingBarHandleModel.SerialId = 0;
            leftSlidingBarHandleModel.CenterPosition = new Vector3(0f, 10f, 6f);
            leftSlidingBarHandleModel.Scale = new Vector3(1f,0.1f,1f);
            leftSlidingBarHandleModel.Rotation = new Vector3(90f,180f,0f);
            leftSlidingBarHandleModel.StormIndexDataSet = stormIndexDataSet;
            leftSlidingBarHandleModel.Label = "SYM-H Index (nT) at " + stormIndexDataSet.earliestTimeStamp;
            leftSlidingBarHandleController = Controller.Instantiate<LeftSlidingBarHandleController>(
                LeftSlidingBarHandleModel.PrefabName, leftSlidingBarHandleModel, transform);
            
            // Right sliding bar handle
            RightSlidingBarHandleModel rightSlidingBarHandleModel = new RightSlidingBarHandleModel();
            rightSlidingBarHandleModel.SerialId = 0;

            //rightSlidingBarHandleModel.CenterPosition = new Vector3(-4.5f, -6.6f, -58f);
            rightSlidingBarHandleModel.CenterPosition = new Vector3(0f, 10f,-52f);

            rightSlidingBarHandleModel.Scale = new Vector3(1f,0.1f,1f);
            rightSlidingBarHandleModel.Rotation = new Vector3(90f,0f,0f);
            rightSlidingBarHandleModel.StormIndexDataSet = stormIndexDataSet;
            rightSlidingBarHandleModel.Label = "SYM-H Index (nT) at " + stormIndexDataSet.lastTimeStamp;
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
            slicingPlaneModel.Scale = new Vector3(1f, 0.1f, 1f);
            slicingPlaneModel.Rotation = new Vector3(90f, 0f, 0f);
            slicingPlaneModel.StormIndexDataSet = stormIndexDataSet;
            slicingPlaneModel.lowerZBound = leftSlidingBarHandleModel.CenterPosition.z;
            slicingPlaneModel.upperZBound = rightSlidingBarHandleModel.CenterPosition.z;
            // slicingPlaneModel.Label = "SYM-H Index (nT) at 23:59:00 hrs";
            slicingPlaneController = Controller.Instantiate<SlicingPlaneController>(SlicingPlaneModel.PrefabName, slicingPlaneModel, transform);

            // // Earth (sphere) 
            // EarthSphereModel earthSphereModel = new EarthSphereModel();
            // earthSphereModel.SerialId = 0;
            // earthSphereModel.CenterPosition = new Vector3(-10f, 0f, 20f);
            // earthSphereModel.Scale = new Vector3(5f, 5f, 5f);
            // earthSphereModel.Rotation = new Vector3(90f, 0f, 90f);
            // earthSphereModel.PointList = pointList;
            // // earthSphereModel.Mc1Data = mc1Data;
            // earthSphereModel.ScaleDataColumnIndex = 1;
            // earthSphereModel.ColorDataColumnIndex = 1;
            // earthSphereModel.AmbientAudioDataColumnIndex = 1;
            // earthSphereModel.PlotName = "TEC";
            // earthSphereModel.visibility = false;
            // earthSphereController =
            //     Controller.Instantiate<EarthSphereController>(EarthSphereModel.PrefabName,
            //         earthSphereModel, transform);


        }

        // Update is called once per frame
        void Update()
        {
        }
        
    }
}