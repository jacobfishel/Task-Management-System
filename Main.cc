#include <iostream>
#include <string>
#include <vector>

using namespace std;


int runPrompts();

int main() {

    // //vector to insert and store and remove tasks
    vector<string> tasks;

    // //TODO: Make the vector into a loop to add and list and remove tasks:

    // let runProgram = true;
    bool runProgram;

    do {
        //runProgram loop(make a function)
        int programQuery = runPrompts();

        switch (programQuery) {
            case 1: {
                string task;
                cout << "Enter a task to add:\n";
                cin.ignore();
                getline(cin, task);
                cout << endl;
                tasks.push_back(task);
                break;
            }

            case 2: {
                cout << "Removing first added task:\n";
                tasks.erase(tasks.begin());
                break;
            }

            case 3: {
                cout << "Here are your tasks:\n";
                for (string task : tasks) {
                    cout << task << endl;
                }
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

