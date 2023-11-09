#ifndef TASK_H
#define TASK_H

#include <string>

class Task
{
private:
    std::string description;
    int priority;
    bool completed;

public:
    Task(std::string description, int priority);
    void displayTask() const;
};

#endif
