using CodeControl;

namespace Scenes
{
    public class DataPointMessage : Message
    {
        // The regionId for which data was changed.
        public int regionId = 0;
        public bool isNewStatusBrushed;

        public DataPointMessage(int regionId, bool isNewStatusBrushed)
        {
            this.regionId = regionId;
            this.isNewStatusBrushed = isNewStatusBrushed;
        }
    }
}