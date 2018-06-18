
#include "Time.h"

namespace HenryGaudet
{

class Signal
{
  public:
    Signal(double voltageOffset, Time timeOffset);
    double getVotageAtTime(Time t) = 0;

  protected:
    double getVoltageOffset();
    Time getTimeOffset();

  private:
    double voltageOffset;
    Time timeOffset;
};

} // namespace HenryGaudet
