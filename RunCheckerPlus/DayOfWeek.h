/**************
Author: Mark Singleton
Date: 10/7/2015
Class: COP 2224C Professor Reed
***************/
#ifndef DAYOFWEEK_H
#define DAYOFWEEK_H
#include <string>

class DayOfWeek
{
    public:
        DayOfWeek();
        void DetermineDayOfWeek();
    private:
        int day;
        std::string raining;
};

#endif // DAYOFWEEK_H
