#ifndef MENU_H
#define MENU_H

#include <vector>
#include "task.h" // Include the header for Task

// Reads in user input and converts it to lowercase
std::string getUserInput();

// display the help menu
void printHelpMenu();

// process user input and perform corresponding work
int processUserInput(std::vector<Task> &tasks);

#endif
