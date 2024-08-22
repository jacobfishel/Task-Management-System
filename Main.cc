#include <iostream>
#include <string>
#include <vector>
#include <limits>

#include "MinHeap.h"

using namespace std;

int runPrompts();

int main() {
    MinHeap* taskHeap = new MinHeap();

    bool runProgram = true;

    do {
        int programQuery = runPrompts();

        switch (programQuery) {
            case 1: {
                string description;
                string dueDate;
                int priority;

                cout << "Enter a task to add:\n";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, description);

                cout << "Enter the due date (mm/dd/yyyy):\n";
                getline(cin, dueDate);

                do {
                    cout << "Enter the priority (1-10):";
                    cin >> priority;
                } while (priority < 1 || priority > 10);

                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                Node* taskNode = new Node(priority, description, dueDate);
                taskHeap->addTaskToHeap(taskNode);
                break;
            }

            case 2: {
                if (taskHeap->isEmpty()) {
                    cout << "No tasks to remove.\n";
                } else {
                    cout << "Removing task...\n";
                    Node* taskNode = taskHeap->extractMin();
                    delete taskNode; // Free the memory
                }
                break;
            }

            case 3: {
                MinHeap tempHeap(*taskHeap); // Copy the heap
                cout << "Here are your tasks:\n";
                while (!tempHeap.isEmpty()) {
                    Node* taskNode = tempHeap.extractMin();
                    cout << "------" << taskNode->description << "-------\n";
                }
                break;
            }

            case 4: {
                // Implement viewing tasks sorted by due date if needed
                break;
            }

            case 5: {
                runProgram = false;
                break;
            }

            default:
                cout << "Invalid option.\n";
                break;
        }

        cout << "Press Enter to continue..." << endl;
        cin.get(); // Waits for the user to press Enter
        cout << endl;

    } while (runProgram);

    delete taskHeap;
    return 0;
}

int runPrompts() {
    int userInput;
    cout << " ------------- 1. Add a task -------------------------\n";
    cout << " ------------- 2. Delete task ------------------------\n";
    cout << " ------------- 3. View tasks by priority -------------\n";
    cout << " ------------- 4. View tasks sorted by due date ------\n";
    cout << " ------------- 5. Exit -------------------------------\n";

    do {
        cin >> userInput;
        cout << endl;
        if (userInput < 1 || userInput > 5) {
            cout << "Invalid input, please enter one of the numbers:\n";
        }
    } while (userInput < 1 || userInput > 5);

    return userInput;
}
