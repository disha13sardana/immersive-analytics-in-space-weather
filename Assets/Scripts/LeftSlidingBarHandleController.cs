using System;
using CodeControl;

namespace Scenes
{
    public class LeftSlidingBarHandleController : Controller<LeftSlidingBarHandleModel>
    {
        private LeftSlidingBarHandleView view;

        public void Awake()
        {
            view = GetComponent<LeftSlidingBarHandleView>();
        }

        protected override void OnInitialize()
        {
            view.SetRotation(model.Rotation);
            view.SetPosition(model.CenterPosition);
            view.SetScale(model.Scale);
            view.PlotLinePlots(model.RegionIdToLocationMap, model.StormIndexDataSet);
            view.SetPlotLabel(model.Label);
        }

        public void SetActive(bool active)
        {
            view.SetActive(active);
        }
    }
}