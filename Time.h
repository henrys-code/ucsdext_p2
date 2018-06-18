#include <ostream>

namespace HenryGaudet
{

class Time
{
    public:
        Time(int hours, int minutes, int seconds);
        int getTotalTimeAsSeconds();
        Time& operator+=(const Time &rhs);
        std::ostream& operator<<(std::ostream &os, const Time &rhs);

    private:
        int seconds;
};

}