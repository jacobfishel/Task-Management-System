#include "Task.h"

    Task::Task() {
        description_ = "";
        priority_ = 0;
        dueDate_ = "";
    };

    Task::Task(string description, int priority, string dueDate) {
        description_ = description;
        priority_ = priority;
        dueDate_ = dueDate;
    };

    Task::~Task() {
        cout << "Task complete.";
    };