#include <iostream>
#include "sqlite3.h"
#include <stdio.h>
#include "menu.h"
using namespace std;

bool executeSQL(string executeString)
{
	sqlite3* DB;
	char* messageError;
	int exit = sqlite3_open("tasks.db", &DB);

	if (exit)
	{
		sqlite3_close(DB);
		return false;
	}
	else
	{
		string sql(executeString);

		exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);

		if (exit != SQLITE_OK)
		{
			sqlite3_free(messageError);
			sqlite3_close(DB);
			return false;
		}
		else
		{
			sqlite3_close(DB);
			return true;
		}
	}
}

string getUserInput()
{
	cout << ">>>>";
	string userCommand;
	cin >> userCommand;
	for (char &c : userCommand) // convert whole cmd to lowercase
		c = tolower(c);
	return userCommand;
}

void addTask(string taskDescription, string taskPriority, string dueDate)
{
}

void deleteTask(string idNumber)
{
}

void editTask(string idNumber)
{
}

void printTaskList(string sortingType)
{
}

void Menu()
{
	string userCommand = getUserInput();
	while (userCommand != "quit")
	{
		if (userCommand == "help")
		{
			cout << "===== Command List: =====" << endl;
			cout << "'help' - view command list" << endl;
			cout << "'task' - begin a task command sequence" << endl;
		}
		else if (userCommand == "task")
		{
			cout << "Task Menu: would you like to add, delete, or print tasks?" << endl;
			cout << "Enter 'add', 'delete' or 'print' to continue..." << endl;
			userCommand = getUserInput();
			if (userCommand == "add")
			{
				string taskDescription, taskPriority, dueDate;

				cout << "Give a description for this task: ";
				cin >> taskDescription;

				cout << "What priority does this task have?" << endl;
				cout << "Enter 'high', 'medium', 'low', or 'none': ";
				cin >> taskPriority;

				cout << "What date should this task be completed before?" << endl;
				cout << "Enter a date in format XX/XX/XXXX (i.e 01/01/2000), or 'none' for no due-date: ";
				cin >> dueDate;

				addTask(taskDescription, taskPriority, dueDate);
				printTaskList("priority");
			}
			else if (userCommand == "delete")
			{
				string idNumber;
				printTaskList("idAsc");
				cout << "Which task would you like to delete? (enter ID number from above list): ";
				cin >> idNumber;

				deleteTask(idNumber);
			}
			else if (userCommand == "edit")
			{
				string idNumber;
				printTaskList("idAsc");
				cout << "Which task would you like to edit? (enter ID number from above list): ";
				cin >> idNumber;

				editTask(idNumber);
			}
			else if (userCommand == "print")
			{
				string sortingType;
				cout << "Enter sorting type from below list:" << endl;
				cout << "'priority' - sort by task priority" << endl;
				cout << "'id' - sort by the ID number of the task" << endl;
				cout << "'dateOldest' - sort by due date showing the oldest " << endl;
				cout << endl;
				cout << "Enter 'priority', 'id', 'dateOldest', or 'dateNewest': ";
				cin >> sortingType;
				printTaskList(sortingType);
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