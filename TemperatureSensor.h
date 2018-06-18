
#include "Sensor.h"

namespace HenryGaudet
{

class TemperatureSensor
{
  public:
    TemperatureSensor(std::string name, Signal &source);
    std::string getUnits();
};

} // namespace HenryGaudet