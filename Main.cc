#include <iostream>

using namespace std;

void printMenu();


int main() {

    int menu = printMenu();
    switch (menu) {
        case 1:
            
    }


    return 0;
}



//function to print the menu and return user input in an int.
int printMenu() {
    int userInput;
    cout << "What would you like to do:\n
             1. Add a task.\n
             2. Delete a task.\n
             3. List tasks.\n
             4. Quit\n\n";

    cin >> userInput;

    //check for valid input and return int.
    while (userInput != 1 || userInput != 2 || userInput != 3 || userInput != 4) {
        cout << "Invalid input. ";
    } else {
        return userInput;        
    }
};
