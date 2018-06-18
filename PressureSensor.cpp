
#include "PressureSensor.h"

namespace HenryGaudet
{

PressureSensor::PressureSensor(std::string name, Signal &source)
    : Sensor(name, source)
{
}

std::string PressureSensor::getUnits()
{
    return "Pounds per square inch (PSI)";
}

}