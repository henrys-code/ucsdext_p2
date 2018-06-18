
#include "ConstantSignal.h"

namespace HenryGaudet
{
ConstantSignal::ConstantSignal(double voltageOffset, Time timeOffset)
    : Signal(voltageOffset, timeOffset)
{}

double ConstantSignal::getVoltageAtTime(Time t)
{
    return voltageOffset;
}

}