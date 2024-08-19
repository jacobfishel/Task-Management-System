#include <iostream>
#include <string>
#include <vector>

#include "Task.h"

using namespace std;


int runPrompts();

int main() {

    // //vector to insert and store and remove tasks
    Task* taskHead = new Task();

    // //TODO: Make the vector into a loop to add and list and remove tasks:

    // let runProgram = true;
    bool runProgram = true;

    do {
        //runProgram loop(make a function)
        int programQuery = runPrompts();

        //change these to get the description, and the duedate.
        switch (programQuery) {

            //Adding a task.
            case 1: {
                string description;
                string dueDate;
                cout << "Enter a task to add:\n";
                cin.ignore();
                getline(cin, description);

                cout << "Enter the due date (mm/dd/yyyy).\n";
                getline(cin, dueDate);

                Node* taskNode = new Node(description, dueDate);

                taskHead->addTask(taskNode);

                break;
            }

            //removing a task
            case 2: {
                cout << "Here are your tasks. Which number would you like to remove?";
                
                break;
            }

            case 3: {
                cout << "Here are your tasks:\n";
                taskHead->listTasks();
                cout << endl;
                break;
            }

            case 4: {
                runProgram = false;
                break;
            }

            default:
                cout << "Invalid option.\n";
                break;
        }
        

    } while (runProgram);


    delete taskHead;
    return 0;
}

//function to print list of commands
int runPrompts() {
    int userInput;

    cout << "1. Add a task.\n";
    cout << "2. Delete task (Deletes the first added task).\n";
    cout << "3. View tasks.\n";
    cout << "4. Exit\n";

    do {

        cin >> userInput;
        cout << endl;
        if (userInput <1 || userInput > 4) {

            cout << "Invalid input, please enter one of the numbers:\n";
        }

    } while (userInput < 1 || userInput > 4);
    

    return userInput;
};

