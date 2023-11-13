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
    for (char &c : userCommand) // convert whole cmd to lowercase
        c = tolower(c);
    return userCommand;
}

void Menu()
{
    string userCommand = getUserInput();
    while (userCommand != "quit")
    {
        if (userCommand == "task")
        {
			cout << "Task Menu: would you like to add, delete, or print tasks?" << endl;
			cout << "Enter 'add', 'delete' or 'print' to continue..." << endl;
			userCommand = getUserInput();
            if (userCommand == "add")
			{	
				string taskDescription, taskPriority, dueDate;
		
				cout << "Give a description for this task: ";
				cin >> taskDescription;
			}
			else if (userCommand == "delete")
			{
			}
			else if (userCommand == "print")
			{
			}
			else // catch 
			{
				cout << "Incorrect command, '" << userCommand << "', please try again..." << endl;
			}	
				
        }
        else // catch
        {
           cout << "Incorrect command, '" << userCommand << "' please try again..." << endl;
        }
        userCommand = getUserInput(); // get next user command
    }
}