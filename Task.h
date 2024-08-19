//linked list class to order tasks in order of their due date.

#ifndef Task_h
#define Task_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Node {
    string description;
    string dueDate;
    Node* next;

    Node(string description_, string dueDate_) : description(description_), dueDate(dueDate_), next(nullptr) {};
};

class Task {

    public:
        Task() : head(nullptr) {};

        void addTask(Node* &task) {

            if(head == nullptr) {
                head = task;
            } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }

            temp->next = task;
            }

        };

        void deleteTask(Node* &task) {
            Node* lead = head;
            Node* follow = nullptr;

            while (lead != nullptr && lead != task) {
                follow = lead;
                lead = lead->next;
            }

            //its not in the list
            if (lead == nullptr) {
                cout << "Not in the list.\n";
                return;
            }

            if (lead == head) {
                head = lead->next;
            } else {
                follow->next = lead->next;
            }

            cout << task->description << " has been deleted.\n";
            delete lead;  // Free the memory
        }

        void listTasks() {
            Node* temp = head;
            while (temp != nullptr) {
                cout << temp->description << " " << endl;
                temp = temp->next;
            }
            cout << endl;
        };
        


    private:
        Node* head;
    
};

#endif // Task_h