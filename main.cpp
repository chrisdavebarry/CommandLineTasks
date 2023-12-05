#include <iostream>
#include "sqlite3.h"
#include <stdio.h>
#include "menu.h"
using namespace std;

bool initDB() // if a DB file not present, make one
{
    sqlite3 *DB;
    char *messageError;
    int exit = sqlite3_open("tasks.db", &DB);

    if (exit)
    {
        sqlite3_close(DB);
        return false;
    }
    else
    {
        string sql("CREATE TABLE IF NOT EXISTS tasks("
                   "ID INTEGER PRIMARY KEY,"
                   "due_date TEXT NOT NULL,"
                   "priority INTEGER NOT NULL,"
                   "description TEXT NOT NULL);");

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

int main()
{
    if (!initDB())
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
