# CommandLineTasks

A CLI task tracking app written in C++ that allows users to add, delete, edit, and list tasks.

Each task holds a few properties - task ID (integer starting at 1), task description, task priority (high medium low), and task due date.

When listing tasks, the user can pick how the tasks should be displayed to the CLI - sorted by task ID (ascending/descending), task priority (ascending/descending), or due date (ascending/descending).

### How to compile this project using g++

Inside the project folder directory run the following command:

```bash
gcc -c sqlite3.c -o sqlite3.o
g++ main.cpp menu.cpp sqlite3.o -o CommandLineTasks
```

To run the program, use the following command:
'''bash
CommandLineTasks
'''

### To Do

- Implement printTaskList() in menu.cpp;
  - Sorting options - sort by priority level (asc. or desc.), sort by task id (asc or desc), sort by due date (asc or desc)
  - Allow users to print only certain priorities of tasks (i.e print only low priority tasks)
- Implement addTask() in menu.cpp;
- Implement deleteTask() in menu.cpp;
