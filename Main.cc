#include <iostream>
#include <cctype>

#include "Task.h"
#include "StoreTasks.h"

using namespace std;

int printMenu();

//handles all the storage methods for a task
void handleTaskForAll(StoreTasks& taskStorage, int prompt);

int main() {

    StoreTasks taskStorage;

    bool runProgram = true;

    do {
        int menu = printMenu();

        //switch function to do what the user wants.
        switch (menu) {
            case 1: {
                cout << "Enter a description: ";
                string description;
                cin.ignore();
                getline (cin, description);

                int priority;
                do {
                    cout << "What is the priority?(10 for urgent, 1 for not urgent)";
                    cin >> priority;

                    if (priority < 1 || priority > 10) {
                        cout << "Invalid input please input a priority between 1 and 10\n";
                    }
                }    while (priority < 1 || priority > 10);

                cout << "Enter the due date in the format MM/DD/YYYY";
                string dueDate;

                //TODO: date validity check
                cin.ignore();
                getline(cin, dueDate);

                Task task1(description, priority, dueDate);
                taskStorage.addTaskToVec(task1);

                break;
            }
            default:
                cout << "Invalid menu option.\n";
                break;

        
        }

        cout << "Press Q to quit or other to continue: ";
        char runAgain;
        cin >> runAgain;

        if (toupper(runAgain) == 'Q') {
            runProgram = false;
        }

    } while(runProgram);

    return 0;
}



//function to print the menu and return user input in an int.
int printMenu() {
    int userInput;
    cout << "What would you like to do:\n";
    cout << "1. Create a task.\n";
    cout << "2. Delete a task.\n";
    cout << "3. List tasks.\n";
    cout << "4. Quit\n\n";

    cin >> userInput;

    //check for valid input and return int.
    while (userInput != 1 && userInput != 2 && userInput != 3 && userInput != 4) {
        cout << "Invalid input. ";
    }
        return userInput;
};

void handleTaskForAll(StoreTasks& taskStorage, int prompt) {

};

