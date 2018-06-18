
#include "PeriodicSignal.h"

namespace HenryGaudet
{

class SawtoothSignal : public PeriodicSignal
{
  public:
    SawtoothSignal(double voltageOffset, Time timeOffset,
                   double minVoltage, double maxVoltage, Time period);
    getVoltageAtTime(Time t);
};

} // namespace HenryGaudet