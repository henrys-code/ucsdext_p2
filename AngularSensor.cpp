
#include "AngularSensor.h"

namespace HenryGaudet
{

AngularSensor::AngularSensor(std::string name, Signal &source)
    : Sensor(name, source)
{
}

std::string AngularSensor::getUnits()
{
    return "Radians";
}

}