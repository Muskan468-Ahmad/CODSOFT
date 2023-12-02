#include <iostream>
using namespace std;

const int MAX_TASKS = 10;

struct Task {
    string description;
    bool completed;
};

void displayMenu() 
{
    cout << "\n===== To-Do List Menu =====\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Mark Task as Completed\n";
    cout << "4. Exit\n";
    cout << "===========================\n";
}

int main() {
    Task tasks[MAX_TASKS];
    int taskCount = 0;
    int choice;

    do 
	{
        displayMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice)
		 {
            case 1:
			 {
                if (taskCount < MAX_TASKS) 
				{
                    Task newTask;
                    cout << "Enter task description: ";
                    cin.ignore(); // Clear the newline character from the buffer
                    getline(cin, newTask.description);
                    newTask.completed = false;
                    tasks[taskCount] = newTask;
                    taskCount++;
                    cout << "Task added!\n";
                } 
				else 
				{
                    cout << "Sorry, the to-do list is full!\n";
                }
                break;
            }
            case 2: 
			{
				if(taskCount == 0)
				{
					cout<<"====No Task Added===="<<endl;
				}
				else
				{
				    cout << "\n===== Your To-Do List =====\n";
                    for (int i = 0; i < taskCount; ++i) 
			    	{
                        cout << i + 1 << ". ";
                        cout << (tasks[i].completed ? "[X] " : "[ ] ");
                        cout << tasks[i].description << '\n';
                    }
                    cout << "============================\n";	
				}
                break;
            }
            case 3:
			 {
                int taskIndex;
                cout << "Enter the task number to mark as completed: ";
                cin >> taskIndex;

                if (taskIndex >= 1 && taskIndex <= taskCount) 
				{
                    tasks[taskIndex - 1].completed = true;
                    cout << "Task marked as completed!\n";
                } else
				 {
                    cout << "Invalid task number.\n";
                }
                break;
            }
            case 4:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }

    } while (choice != 4);

    return 0;
}

