//This class is the storage of all tasks comprised of different storage methods
//Vector, linked list, 

#ifndef STORE_TASKS_H
#define STORE_TASKS_H

#include <iostream>
#include <vector>

#include "Task.h"

#define SIZE 100

using namespace std;

//linked list of the tasks
struct Node {
    Task task;
    Node* next;

    Node(const Task& task) : task(task), next(nullptr) {}
};

class StoreTasks {

    public:
        StoreTasks();   //default contsructor

        //Vector storage functions
        void addTaskToVec(Task task);
        void deleteTaskFromVec(Task& task);
        void listTasksFromVec();

        //Linked list functions.
        void addTaskToLinkedList(Node* headTask);
        void deleteTaskFromLinkedList(Node* headTask);
        void listTasksFromLinkedList(Node* headTask);
        void listTasksFromLinkedListRtoL(Node* headTask);

    private:
        vector<Task> tasks_;
        Node* head_;

};

#endif // STORE_TASKS_H