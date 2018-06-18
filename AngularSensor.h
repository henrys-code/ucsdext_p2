
#include "Sensor.h"

namespace HenryGaudet
{

class AngularSensor
{
  public:
    AngularSensor(std::string name, Signal &source);
    std::string getUnits();
};

} // namespace HenryGaudet