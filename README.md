# CommandLineTasks
A CLI task tracking app written in C++ that allows users to add, delete, edit, and list tasks. 

Each task holds a few properties - task ID (integer starting at 1), task description, task priority (high medium low), and task due date.

When listing tasks, the user can pick how the tasks should be displayed to the CLI - sorted by task ID (ascending/descending), task priority (ascending/descending), or due date (ascending/descending).

### How to compile this project using g++
Inside the project folder directory run the following command:
```bash 
g++ main.cpp menu.cpp -o CommandLineTasks
```

### To Do
- implement initDB() in main.cpp;
	- add to SQlite database??? database stored in the project directory? 
- Implement printTaskList() in menu.cpp;
	- Sorting options - sort by priority level (asc. or desc.), sort by task id (asc or desc), sort by due date (asc or desc)
	- Allow users to print only certain priorities of tasks (i.e print only low priority tasks)
- Implement addTask() in menu.cpp;
- Implement deleteTask() in menu.cpp;
