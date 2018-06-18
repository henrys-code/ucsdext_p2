
#include "SawtoothSignal.h"

namespace HenryGaudet
{

SawtoothSignal::SawtoothSignal(double voltageOffset, Time timeOffset,
                               double minVoltage, double maxVoltage, Time period)
    : PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period)
{
}

SawtoothSignal::getVoltageAtTime(Time t)
{
    int toffsec = timeOffset.getTotalTimeAsSeconds();
    int tsec = t.getTotalTimeAsSeconds();
    int psec = period.getTotalTimeAsSeconds();
    return  voltageOffset
            + minVoltage
            + ((tsec + toffsec) * (maxVoltage - minVoltage) / psec)
            % (maxVoltage - minVoltage);
}

} // namespace HenryGaudet