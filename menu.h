#ifndef MENU_H
#define MENU_H
// Reads in user input and converts it to lowercase
std::string getUserInput();

// process user input and perform corresponding work
void Menu();
void addTask(std::string taskDescription, std::string taskPriority, std::string dueDate);
void deleteTask(std::string idNumber);
void editTask(std::string idNumber);
void printTaskList(std::string sortingType);

#endif
