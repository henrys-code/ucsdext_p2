
#include "Time.h"

namespace HenryGaudet
{
Time::Time(int hours, int minutes, int seconds)
{
    this->seconds = seconds + (minutes*60) + (hours*3600);
}

int Time::getTotalTimeAsSeconds()
{
    return seconds;
}

Time& Time::operator+=(const Time &rhs)
{
    this->seconds += rhs.seconds;
    return *this;
}

std::ostream& Time::operator<<(std::ostream &os, const Time &rhs)
{
    int tempsec = seconds;
    int hours = tempsec / 3600;
    tempsec -= hours * 3600;
    int minutes = tempsec / 60;
    tempsec -= minutes * 60;

    return os << hours << ":h" << minutes << ":m" << tempsec << ":s";
}

}