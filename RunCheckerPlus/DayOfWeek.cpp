/**************
Author: Mark Singleton
Date: 10/7/2015
Class: COP 2224C Professor Reed
***************/
#include "DayOfWeek.h"
#include "Runner.h"
#include <iostream>
#include <string>

using namespace std;

Runner start;

DayOfWeek::DayOfWeek(){
    int day = 0;
    string raining = "";
}

void DayOfWeek::DetermineDayOfWeek()
{

    cout << "Select the number that represents the day you wish to run: " << endl;
    cout << "Sun: 1, Mon: 2, Tue: 3, Wed: 4" << endl;
    cout << "Thu: 5, Fri: 6, Sat: 7" << endl;
    cin >> day;

    if(day < 7)
    {
        cout << "Is it raining? yes or no" << endl;
        cin >> raining;
    }

    switch(day)
    {
    case 1:
        cout << "Sunday" << endl;
        if(raining == "no")
        {
            cout << "It's a wonderful day." << endl << "Enjoy your run!" << endl;
        }
        else
        {
            cout << "It's raining." << endl << "You might catch cold." << endl << "Sorry, no running today" << endl;
        }
        break;
    case 2: start.CheckRunnerStatus(raining);
        break;
    case 3: start.CheckRunnerStatus(raining);
        break;
    case 4: start.CheckRunnerStatus(raining);
        break;
    case 5: start.CheckRunnerStatus(raining);
        break;
    case 6: start.CheckRunnerStatus(raining);
        break;
    case 7:
        cout << "It's Saturday." << endl << "Your day off." << endl << "No running today." << endl << "Go have some fun!" << endl;
        break;
    default:
        cout << "This is not a valid option. Please select from the choices below." << endl;
        break;

    }

}

