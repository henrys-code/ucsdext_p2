
#include "Sensor.h"

namespace HenryGaudet
{

Sensor::Sensor(std::string name, Signal &source)
    : name(name),
      source(source)
{
}

void Sensor::takeReading(Time t, DataRecorder &recorder)
{
    recorder.log(t, name, source.getVoltageAtTime(t), getUnits());
}

std::string Sensor::getName()
{
    return name;
}

Signal &Sensor::getSource()
{
    return source;
}

} // namespace HenryGaudet