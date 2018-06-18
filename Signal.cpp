
#include "Signal.cpp"

namespace HenryGaudet
{

Signal::Signal(double voltageOffset, Time timeOffset)
    :   voltageOffset(voltageOffset),
        timeOffset(timeOffset)
{}

double Signal::getVoltageOffset()
{
    return voltageOffset;
}

Time Signal::getTimeOffset()
{
    return timeOffset;
}

}