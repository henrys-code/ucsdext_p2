
#include "DataRecorder.h"

namespace HenryGaudet
{
DataRecorder::DataRecorder(ostream &out)
    : out(out)
{}

void DataRecorder::log(Time timestamp, std::string sensorName, double sensorVoltage, std::string sensorUnits)
{
    out << time << " - " << sensorName << " - " << (round(sensorVoltage * 100) / 100) << " " << sensorUnits << std::endl;
}
}