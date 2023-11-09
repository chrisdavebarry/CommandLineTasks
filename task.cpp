#include <iostream>
#include "task.h"

Task::Task(std::string description, int priority)
{
  this->description = description;
  this->priority = priority;
  this->completed = false;
}

void Task::displayTask() const
{
  std::cout << "Description: " << description << std::endl;
  std::cout << "Priority: " << priority << std::endl;
  std::cout << "Completed: " << (completed ? "Yes" : "No") << std::endl;
}
