#include "StoreTasks.h"

    void addTask(Task task) {
        tasks_.push_back(task);
    };

    void deleteTask(Task& task) {
        for (int i = 0; i < tasks_.size(); i++) {
            if (tasks_[i] == task) {
                tasks_[i] = task[size - 1];
                tasks_.pop_back();
            }
        }
    };

    void listTasks() {
        for (int i = 0; i < tasks_.size(); i++) {
            cout << tasks_[i] << "\n";
        }
    };