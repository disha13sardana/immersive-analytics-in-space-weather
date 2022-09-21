using CodeControl;

namespace Scenes
{
    public class SlicingPlaneManipulationMessage : Message
    {
        public enum SlicingPlaneManipulationState
        {
            BEGUN,
            ENDED
        }

        public SlicingPlaneManipulationState ManipulationState;
        public float slicingPlanePosition;

        public SlicingPlaneManipulationMessage(SlicingPlaneManipulationState manipulationState, float slicingPlanePosition)
        {
            this.ManipulationState = manipulationState;
            this.slicingPlanePosition = slicingPlanePosition;
        }
    }
}