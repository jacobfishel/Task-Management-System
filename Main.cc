#include <iostream>

using namespace std;

int printMenu();

int main() {

    StoreTasks taskStorage;

    int menu = printMenu();

    //switch function to do what the user wants.
    switch (menu) {
        case 1: {
            cout << "Enter a description: ";
            string decrtiption;
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

            Task task1(decrtiption, priority, dueDate);

            break;
        }
        default:
            cout << "Invalid menu option.\n";
            break;

            
    };


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
    while (userInput != 1 || userInput != 2 || userInput != 3 || userInput != 4) {
        cout << "Invalid input. ";
    }
        return userInput;
};
