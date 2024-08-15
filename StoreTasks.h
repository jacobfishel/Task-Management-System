#include <iostream>
#include <vector>

#define SIZE 100

using namespace std;

//linked list of the tasks
struct Node {
    Task task;
    Node* next;
}

class StoreTasks {
    public:
        StoreTasks();

        void addTask(Task task);
        void deleteTask(Task& task);
        void listTasks();
        

    private:
        vector<Task> tasks_;

}