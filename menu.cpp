#include <iostream>
#include <vector>
#include "task.h"
#include "menu.h"
using namespace std;

string getUserInput()
{
    cout << ">>>>";
    string userCommand;
    cin >> userCommand;
    for (char &c : userCommand) // convert cmd to lowercase
    {
        c = tolower(c);
    }
    return userCommand;
}

void printHelpMenu()
{
    cout << "==========   Help Menu   ==========" << endl;
    cout << "'quit'    quits the program" << endl;
    cout << "========== End Help Menu ==========" << endl
         << endl;
}

int processUserInput(vector<Task> &tasks)
{
    string userCommand = getUserInput();
    while (userCommand != "quit")
    {
        if (userCommand == "help" || userCommand == "h" || userCommand == "?")
        {
            printHelpMenu();
        }
        else if (userCommand == "abcd")
        {
            // Handle quit command
        }
        else
        {
            // Handle other commands
        }
        userCommand = getUserInput(); // get next user command
    }
    return 1; // only reaches here if quit command called
}