#include <iostream>
#include <vector>
#include "task.h"
#include "menu.h"
using namespace std;

bool initDB()
{
    return true;
}

int main()
{
    if(!initDB())
    {
        cout << "Issues initializing the database file aborting program..." << endl;
        return -1;
    }
    else
        Menu(); // starts the menu, exits when user runs 'quit'
    return 0;
}
