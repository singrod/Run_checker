/**************
Author: Mark Singleton
Date: 10/7/2015
Class: COP 2224C Professor Reed
***************/
#include "Runner.h"
#include "DayOfWeek.h"
#include <iostream>
#include <string>

using namespace std;

Runner::Runner(){
        string haveClass = "";
        string fatigued = "";
        double stressLevel = 0.0;
        int daysLastExercised = 0;
}

void Runner::CheckRunnerStatus(string &raining)
{

cout << "Do you have class at or before 9:00 am? yes or no" << endl;
cin >> haveClass;
cout << "Are you tired? yes or no" << endl;
cin >> fatigued;
cout << "What is you stress level from 1 - 10 ? " << endl;
cin >> stressLevel;
cout << "How many days since you last exercised? " << endl;
cin >> daysLastExercised;

    if (haveClass == "no" && fatigued == "no" && raining == "no")
    {
        cout << "Everything looks good." << endl << "Have fun running!" << endl;
    }
    else if (stressLevel > 5 || daysLastExercised >= 3)
    {
        if(stressLevel > 5 && daysLastExercised >= 3)
        {
            cout << "Your stress level is " << stressLevel << " and you last exercised " << daysLastExercised << "days ago." << endl;
            cout << "By all means, Go for a run!" << endl;

        }
        else if(stressLevel > 5)
        {
            cout << "Your stressed out! You need a run." << endl;
        }
        else
        {
            cout << "You haven't exercised in " << daysLastExercised << " days. You need to run." << endl;
        }

    }else if(haveClass == "yes"){
        cout << "You have class. Sorry, no running." << endl;

    }else if(fatigued == "yes"){
        cout << "You look sleepy. Take a nap instead." << endl;
    }else {
        cout << "It's raining outside. You might catch cold. You'll have to run another day." << endl;
    }


}
