#include <iostream>
#include <string>
#include <vector>
#include <limits>

#include "Task.h"

using namespace std;


int runPrompts();

int main() {

     //vector to insert and store and remove tasks
    Task* taskHead = new Task();


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
                int priority;

                cout << "Enter a task to add:\n";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, description);
                cout << endl;

                cout << "Enter the due date (mm/dd/yyyy):\n";
                getline(cin, dueDate);
                cout << endl;

                do {
                    cout << "Enter the priority (1-10):";
                    cin >> priority;
                } while (priority < 1 || priority > 10);

                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                Node* taskNode = new Node(description, dueDate, priority);
                taskHead->addTask(taskNode);
                break;
            }

            //removing a task
            //TODO: remove a certain task
            case 2: {
                int taskNumb;
                cout << "Here are your tasks. Which task would you like to remove?\n";
                taskHead->listTasks();

                cin >> taskNumb;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                taskHead->findAndDelete(taskNumb);
                break;
            }

            case 3: {
                cout << "Here are your tasks:\n";
                taskHead->listTasks();
                cout << endl;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }

            case 4: {
                cout << "Here are your tasks in priority order:";
            }

            case 7: {
                runProgram = false;
                return 0;
                // break;
            }

            default:
                cout << "Invalid option.\n";
                break;
        }
        
            std::cout << "Press Enter to continue..." << endl;
            cin.get();     // Waits for the user to press Enter
            cout << endl;

    } while (runProgram);


    delete taskHead;
    return 0;
}

//function to print list of commands
int runPrompts() {
    int userInput;
    cout << " ------------- 1. Add a task -------------------------\n";
    cout << " ------------- 2. Delete task ------------------------\n";
    cout << " ------------- 3. View tasks -------------------------\n";
    cout << " ------------- 4. View tasks by priority -------------\n";
    cout << " ------------- 5. Undo the last added task -----------\n";
    cout << " ------------- 6. View tasks sorted by due date ------\n";
    cout << " ------------- 7. Exit -------------------------------\n";

    do {

        cin >> userInput;
        cout << endl;
        if (userInput <1 || userInput > 7) {

            cout << "Invalid input, please enter one of the numbers:\n";
        }

    } while (userInput < 1 || userInput > 7);
    

    return userInput;
};

