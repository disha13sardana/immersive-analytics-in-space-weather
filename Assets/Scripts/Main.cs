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
        
        private List<Dictionary<string, object>> pointList;
        private Mc1Data mc1Data;
        private float CMVScale = 0.3f;

        void Start()
        {
            //SpatialMapping.Instance.DrawVisualMeshes = false;

            // pointList = CSVReader.Read("mc1_clean");
            // mc1Data = new Mc1Data("mc1_processed_neg_1");
            
            pointList = CSVReader.Read("storm_day_sy_index");
            var stormIndexData = new StormIndexData("mc1_processed_neg_1");

            // Left sliding bar handle with line
            LeftSlidingBarHandleModel leftSlidingBarHandleModel = new LeftSlidingBarHandleModel();
            leftSlidingBarHandleModel.SerialId = 0;
            leftSlidingBarHandleModel.CenterPosition = new Vector3(0f, 10f, 6f);
            leftSlidingBarHandleModel.Scale = new Vector3(1f,0.1f,1f);
            leftSlidingBarHandleModel.Rotation = new Vector3(90f,180f,0f);
            leftSlidingBarHandleModel.Mc1Data = mc1Data;
            leftSlidingBarHandleModel.Label = "Dst Index (nT) at 00:00 hrs";
            leftSlidingBarHandleController = Controller.Instantiate<LeftSlidingBarHandleController>(
                LeftSlidingBarHandleModel.PrefabName, leftSlidingBarHandleModel, transform);
            
            // Right sliding bar handle
            RightSlidingBarHandleModel rightSlidingBarHandleModel = new RightSlidingBarHandleModel();
            rightSlidingBarHandleModel.SerialId = 0;
            rightSlidingBarHandleModel.CenterPosition = new Vector3(0f, 10f, -6f);
            rightSlidingBarHandleModel.Scale = new Vector3(1f,0.1f,1f);
            rightSlidingBarHandleModel.Rotation = new Vector3(90f,180f,0f);
            rightSlidingBarHandleModel.Mc1Data = mc1Data;
            rightSlidingBarHandleModel.Label = "Dst Index (nT) at xx:xx hrs";
            rightSlidingBarHandleController = Controller.Instantiate<RightSlidingBarHandleController>(
                RightSlidingBarHandleModel.PrefabName, rightSlidingBarHandleModel, transform);
            // var transform1 = transform;
            // var transformEulerAngles = transform1.eulerAngles;
            // transformEulerAngles.y = -90;
            // transform1.eulerAngles = transformEulerAngles;
        }

        // Update is called once per frame
        void Update()
        {
        }
        
    }
}