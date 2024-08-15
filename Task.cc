#include "Task.h";

    Task() {
        description_ = "";
        priority_ = 0;
        dueDate_ = "";
    };

    Task(string description, int priority, string dueDate) {
        description_ = description;
        priority_ = priority;
        dueDate_ = dueDate;
    };

    ~Task(Task& task) {
        cout << task << " complete.";
    };