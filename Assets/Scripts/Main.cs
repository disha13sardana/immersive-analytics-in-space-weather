using System;
using System.Collections.Generic;
using UnityEngine;
using CodeControl;

namespace Scenes
{
    public class Main : MonoBehaviour
    {
        private LeftSlidingBarHandleController leftSlidingBarHandleController;
        private RightSlidingBarHandleController rightSlidingBarHandleController;
        private EarthSphereController earthSphereController;
        private List<Dictionary<string, object>> pointList;
        // private StormIndexData stormIndexData;
        // private float CMVScale = 0.3f;

        void Start()
        {
            //SpatialMapping.Instance.DrawVisualMeshes = false;

            // pointList = CSVReader.Read("mc1_clean");
            // mc1Data = new Mc1Data("mc1_processed_neg_1");
            
            // pointList = CSVReader.Read("storm_day_sym_index");
            var stormIndexDataSet = new StormIndexDataSet("storm_day_sym_index");

            // Left sliding bar handle with line
            LeftSlidingBarHandleModel leftSlidingBarHandleModel = new LeftSlidingBarHandleModel();
            leftSlidingBarHandleModel.SerialId = 0;
            leftSlidingBarHandleModel.CenterPosition = new Vector3(0f, 0f, 0f);
            leftSlidingBarHandleModel.Scale = new Vector3(1f,0.1f,1f);
            leftSlidingBarHandleModel.Rotation = new Vector3(90f,180f,0f);
            leftSlidingBarHandleModel.StormIndexDataSet = stormIndexDataSet;
            leftSlidingBarHandleModel.Label = "Dst Index (nT) at 00:00 hrs";
            leftSlidingBarHandleController = Controller.Instantiate<LeftSlidingBarHandleController>(
                LeftSlidingBarHandleModel.PrefabName, leftSlidingBarHandleModel, transform);
            
            // Right sliding bar handle
            RightSlidingBarHandleModel rightSlidingBarHandleModel = new RightSlidingBarHandleModel();
            rightSlidingBarHandleModel.SerialId = 0;
            rightSlidingBarHandleModel.CenterPosition = new Vector3(-4.5f, -6.6f, -58f);
            rightSlidingBarHandleModel.Scale = new Vector3(1f,0.1f,1f);
            rightSlidingBarHandleModel.Rotation = new Vector3(90f,180f,0f);
            rightSlidingBarHandleModel.StormIndexDataSet = stormIndexDataSet;
            rightSlidingBarHandleModel.Label = "Dst Index (nT) at xx:xx hrs";
            rightSlidingBarHandleController = Controller.Instantiate<RightSlidingBarHandleController>(
                RightSlidingBarHandleModel.PrefabName, rightSlidingBarHandleModel, transform);
            // var transform1 = transform;
            // var transformEulerAngles = transform1.eulerAngles;
            // transformEulerAngles.y = -90;
            // transform1.eulerAngles = transformEulerAngles;
            
            // Earth (sphere) 
            EarthSphereModel earthSphereModel = new EarthSphereModel();
            earthSphereModel.SerialId = 0;
            earthSphereModel.CenterPosition = new Vector3(-30f, 0f, 0f);
            earthSphereModel.Scale = new Vector3(5f, 5f, 5f);
            earthSphereModel.Rotation = new Vector3(90f, 0f, 90f);
            earthSphereModel.PointList = pointList;
            // earthSphereModel.Mc1Data = mc1Data;
            earthSphereModel.ScaleDataColumnIndex = 1;
            earthSphereModel.ColorDataColumnIndex = 1;
            earthSphereModel.AmbientAudioDataColumnIndex = 1;
            earthSphereModel.PlotName = "TEC";
            earthSphereModel.visibility = false;
            earthSphereController =
                Controller.Instantiate<EarthSphereController>(EarthSphereModel.PrefabName,
                    earthSphereModel, transform);
        }

        // Update is called once per frame
        void Update()
        {
        }
        
    }
}