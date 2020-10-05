using System.Collections.Generic;
using CodeControl;
using UnityEngine;

namespace Scenes
{
    public class RightSlidingBarHandleController : Controller<RightSlidingBarHandleModel>
    {
        private RightSlidingBarHandleView view;

        public void Awake()
        {
            view = GetComponent<RightSlidingBarHandleView>();
        }

        protected override void OnInitialize()
        {
            view.SetRotation(model.Rotation);
            view.SetPosition(model.CenterPosition);
            view.SetScale(model.Scale);
            view.SetPlotLabel(model.Label);
            
        }
        
        public void SetActive(bool active)
        {
            view.SetActive(active);
        }
    }
}