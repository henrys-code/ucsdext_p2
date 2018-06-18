
#include <string>
#include "DataRecorder.h"
#include "Time.h"
#include "Signal.h"

namespace HenryGaudet
{
class Sensor
{
  public:
    Sensor(std::string name, Signal &source);
    void takeReading(Time t, DataRecorder &recorder);

  protected:
    std::string getUnits() = 0;
    std::string getName();
    Signal &getSource();

  private:
    std::string name;
    Signal &source;
};

} // namespace HenryGaudet