#include <iostream>
#include <vector>
#include "task.h"
#include "menu.h"
using namespace std;

int main()
{
    vector<Task> tasks;          // task object where information will be stored
    if (processUserInput(tasks)) // returns 1 (true) if quit command called
        cout << "Thanks for using my app! - Chris Barry" << endl;

    return 0;
}
