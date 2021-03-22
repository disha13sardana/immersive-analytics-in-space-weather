using System;
using CodeControl;

namespace Scenes
{
    public class MapPlotControllerWithLines : Controller<MapPlotModelWithLines>
    {
        private MapPlotViewWithLines view;

        public void Awake()
        {
            view = GetComponent<MapPlotViewWithLines>();
        }

        protected override void OnInitialize()
        {
            view.SetRotation(model.Rotation);
            view.SetPosition(model.CenterPosition);
            view.SetScale(model.Scale);
            view.PlotLinePlots(model.RegionIdToLocationMap, model.Mc1Data);
            view.SetPlotLabel(model.Label);
        }

        public void SetActive(bool active)
        {
            view.SetActive(active);
        }
    }
}