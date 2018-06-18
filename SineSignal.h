
#include <math.h>
#include "PeriodicSignal.h"

#define PI 3.14159265358979323846

namespace HenryGaudet
{

class SineSignal : public PeriodicSignal
{
  public:
    SineSignal(double voltageOffset, Time timeOffset,
               double minVoltage, double maxVoltage, Time period);
    double getVoltageAtTime(Time t);
};

} // namespace HenryGaudet