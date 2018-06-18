
#include "TemperatureSensor.h"

namespace HenryGaudet
{

TemperatureSensor::TemperatureSensor(std::string name, Signal &source)
    : Sensor(name, source)
{
}

std::string TemperatureSensor::getUnits()
{
    return "Degrees Celsius";
}

}