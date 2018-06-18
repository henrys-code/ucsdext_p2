
#include "Signal.h"

namespace HenryGaudet
{

class PeriodicSignal : public Signal
{
  public:
    PeriodicSignal(double voltageOffset, Time timeOffset,
                   double minVoltage, double maxVoltage, Time period);
    //double getVoltageAtTime(Time t) = 0;

  protected:
    double getMinVoltage();
    double getMaxVoltage();
    Time getPeriod();

  private:
    double minVoltage;
    double maxVoltage;
    Time period;
};

} // namespace HenryGaudet