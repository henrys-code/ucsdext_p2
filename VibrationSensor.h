
#include "Sensor.h"

namespace HenryGaudet
{

class VibrationSensor
{
  public:
    VibrationSensor(std::string name, Signal &source);
    std::string getUnits();
};

} // namespace HenryGaudet