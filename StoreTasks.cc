#include "StoreTasks.h"

    StoreTasks::StoreTasks() : tasks_(), head_(nullptr) {};
    
    void StoreTasks::addTaskToVec(Task task) {
        tasks_.push_back(task);
    };

    void StoreTasks::deleteTaskFromVec(Task& task) {
        for (auto it = tasks_.begin(); it != tasks_.end(); ++it) {
            if (it->description_ == task.description) {
                tasks_.erase(it);
                break;
            }
        }
    };

    void StoreTasks::listTasksFromVec() {
        for (const auto& task : tasks_) {
            cout << task << "\n";
        }
    };


        //Linked list functions.
    void StoreTasks::addTaskToLinkedList(Node& *head, Task& task) {
        Task temp = task;

        

        

    };

    void StoreTasks::deleteTaskFromLinkedList(Node& *headTask);
    void StoreTasks::listTasksFromLinkedList(Node& *headTask);
    void StoreTasks::listTasksFromLinkedListRtoL(Node& *headTask);