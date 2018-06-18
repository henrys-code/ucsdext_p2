
#include "Sensor.h"

namespace HenryGaudet
{

class PressureSensor
{
  public:
    PressureSensor(std::string name, Signal &source);
    std::string getUnits();
};

} // namespace HenryGaudet