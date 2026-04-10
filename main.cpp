#include<iostream>
#include "Task.h"
#include "Heap.h"
using namespace std;

int main(){
    Task t1 = {1,"Task1", 90, 3};

    cout << "Task Scheduler Running...." << endl;
    cout << "Task ID:" << t1.taskID << endl;
    return 0;
}