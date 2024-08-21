//linked list class to order tasks in order of their due date.

#ifndef Task_h
#define Task_h

#include <iostream>
#include <string>
#include <vector>
#include "MinHeap.h"

using namespace std;

struct Node {
    string description;
    string dueDate;
    //TODO: implement priority.
    int priority;
    Node* next;

    Node(string description_, string dueDate_, int priority_) : description(description_), dueDate(dueDate_),
                                                                priority(priority_), next(nullptr) {};
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
            cout << "Task added.\n\n";
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

            cout << task->description << " has been deleted.\n\n";
            delete lead;  // Free the memory
        }

        void findAndDelete(int numb) {
            //check to make sure input is an int
            if (typeid(numb) != typeid(int)) {
                cout << "invalid input";
                return;
            }
            numb--;          //decrement to get index
            int i = 0;      // iterator to match indexes to remove value
            Node* temp = head;
            while(temp->next != nullptr && numb != i) {
                temp = temp->next;
                i++;
            }
            //if the index was found
            if (i == numb) {
                deleteTask(temp);
            } else {
                cout << "Not in the list.";
            }
        }

        void listTasks() {
            Node* temp = head;
            int i = 1;
            while (temp != nullptr) {
                cout << i << ": " << temp->description << "  [Priority: " << temp->priority
                     << "]  [Due date: " << temp->dueDate << "]" << endl;
                temp = temp->next;
                i++;
            }
            cout << endl;
        };
        


    private:
        Node* head;
    
};

#endif // Task_h