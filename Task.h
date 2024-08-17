#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>

using namespace std;

class Task {
    public:
        Task();
        Task(string description, int priority, string dueDate);
        ~Task();

    private:
        string description_;
        int priority_;
        string dueDate_;

};

#endif // TASK_H