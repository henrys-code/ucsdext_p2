
#include <ostream>
#include <string>
#include <math.h>
#include "Time.h"

namespace HenryGaudet
{

class DataRecorder
{
  public:
    DataRecorder(ostream &out);
    void log(Time timestamp, std::string sensorName, double sensorVoltage, std::string sensorUnits);

  private:
    ostream &out;
};

} // namespace HenryGaudet