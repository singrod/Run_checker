/**************
Author: Mark Singleton
Date: 10/7/2015
Class: COP 2224C Professor Reed
***************/
#include <iostream>
#include "DayOfWeek.h"

using namespace std;


int main()
{
    string nextTurn;

    cout << "Would you like to check your run status? yes or no" << endl;
    cin >> nextTurn;

    while(nextTurn == "yes")
    {

        DayOfWeek start;
        start.DetermineDayOfWeek();

        cout << endl << "Would you like to try again? yes or no" << endl;
        cin >> nextTurn;

    }

    cout << "Thank you for your input. Have a great day." << endl;


    return 0;
}





