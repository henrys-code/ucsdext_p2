
#include "PeriodicSignal.h"

namespace HenryGaudet
{

PeriodicSignal::PeriodicSignal(double voltageOffset, Time timeOffset,
                               double minVoltage, double maxVoltage, Time period)
    : Signal(voltageOffset, timeOffset),
      minVoltage(minVoltage),
      maxVoltage(maxVoltage),
      period(period)
{
}

double PeriodicSignal::getMinVoltage()
{
    return minVoltage;
}

double PeriodicSignal::getMaxVoltage()
{
    reutrn maxVoltage;
}

double PeriodicSignal::getPeriod()
{
    return period;
}

} // namespace HenryGaudet