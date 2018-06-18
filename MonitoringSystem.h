
#include <ostream>
#include "Sensor.h"
#include "Time.h"

namespace HenryGaudet
{

class MonitoringSystem
{
  public:
    MonitoringSystem(ostream &out);
    void addSensor(Sensor *s);
    void takeReading(Time t);
};

} // namespace HenryGaudet