#include "StoreTasks.h"

    StoreTasks::StoreTasks() : head(nullptr){};
    
    void addTaskToVec(Task task) {
        tasks_.push_back(task);
    };

    void deleteTaskFromVec(Task& task) {
        for (auto it = tasks_.begin(); it != tasks_.end(); ++it) {
            if (*it == task) {
                tasks_.erase(it);
                break;
            }
        }
    };

    void listTasksFromVec() {
        for (const auto& task : tasks_) {
            cout << task << "\n";
        }
    };


        //Linked list functions.
    void addTaskToLinkedList(Node& *head, Task& task) {
        Task temp = task;

        

        

    };

    void deleteTaskFromLinkedList(Node& *headTask);
    void listTasksFromLinkedList(Node& *headTask);
    void listTasksFromLinkedListRtoL(Node& *headTask);