using CodeControl;

namespace Scenes
{
    public class LinePlotController : Controller<LinePlotModel>
    {
        private LinePlotView view;

        public void Awake()
        {
            //Debug.Log("Initializing Line PLot View.");
            view = GetComponent<LinePlotView>();
        }

        protected override void OnInitialize()
        {
            view.PlotData(model.Data, model.LineWidth);
            view.SetPosition(model.OriginPosition);
            view.SetScale(model.Scale);
            view.SetRotation(model.Rotation);
        }
    }
}