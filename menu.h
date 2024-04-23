#ifndef MENU_H
#define MENU_H
bool executeSQL(std::string executeString);
std::string getUserInput(); // Reads in user input and converts it to lowercase
void addTask(std::string taskDescription, std::string taskPriority, std::string dueDate);
void deleteTask(std::string idNumber);
void editTask(std::string idNumber);
void printTaskList(std::string sortingType);
void Menu(); // process user input and perform corresponding work


#endif
