
#include "SineSignal.h"

namespace HenryGaudet
{

SineSignal::SineSignal(double voltageOffset, Time timeOffset,
                               double minVoltage, double maxVoltage, Time period)
    : PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period)
{
}

SineSignal::getVoltageAtTime(Time t)
{
    int toffsec = timeOffset.getTotalTimeAsSeconds();
    int tsec = t.getTotalTimeAsSeconds();
    int psec = period.getTotalTimeAsSeconds();
    return  voltageOffset
            + minVoltage
            + (maxVoltage - minVoltage) / 2
            + sin((tsec + toffsec) * 2 * PI / psec)
            * (maxVoltage - minVoltage) / 2;
}

} // namespace HenryGaudet