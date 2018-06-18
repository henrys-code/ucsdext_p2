
#include "Signal.h"

namespace HenryGaudet
{

class ConstantSignal : public Signal
{
    public:
        ConstantSignal(double voltageOffset, Time timeOffset);
        double getVoltageAtTime(Time t);
}

}