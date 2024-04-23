#include <iostream>
#include "sqlite3.h"
#include <stdio.h>
#include "menu.h"
using namespace std;

int main()
{
    if (!executeSQL("CREATE TABLE IF NOT EXISTS tasks(ID INTEGER PRIMARY KEY, due_date TEXT NOT NULL, priority INTEGER NOT NULL, description TEXT NOT NULL);"))
    {
        cout << "Issues initializing the database file aborting program..." << endl;
        return -1;
    }
    else
    {
        Menu(); // starts the menu, exits when user runs 'quit'
    }
    return 0;
}
