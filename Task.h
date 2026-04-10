#ifndef TASK_H
#define TASK_H

#include<string>
using namespace std;

struct Task {
    int taskID;
    string description;
    int priority;
    int deadline;
};

#endif
