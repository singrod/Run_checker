/**************
Author: Mark Singleton
Date: 10/7/2015
Class: COP 2224C Professor Reed
***************/
#ifndef RUNNER_H
#define RUNNER_H
#include <string>

class Runner
{
    public:
        Runner();
        void CheckRunnerStatus(std::string &raining);
    private:
        std::string haveClass;
        std::string fatigued;
        double stressLevel;
        int daysLastExercised;
};

#endif // RUNNER_H
