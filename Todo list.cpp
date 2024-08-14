#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task {
    string description;
    bool completed;

    Task(const string& desc, bool comp = false) : description(desc), completed(comp) {}
};

void add_Task(vector<Task>& tasks) {
    string desc;
    cout << "Enter the task description: ";

    cin.ignore(); 

    getline(cin , desc);
    tasks.push_back(Task(desc));

    cout << "Task add successfully.\n";
}

void view_Tasks(const std::vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No task available.\n";
    } else {
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << (tasks[i].completed ? "***Completed*** " : "**Pending** ") 
                      << tasks[i].description << '\n';
        }
    }
}

void mark_Task_Complete(vector<Task>& tasks) {
    int index;
    cout << "Enter the task number to mark as complete: ";
    cin >> index;

    if (index > 0 && index <= tasks.size()) {
        tasks[index - 1].completed = true;
        cout << "Task marked as complete.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

void delete_Task(vector<Task>& tasks) {
    int index;
    cout << "Enter the task number to delete: ";
    cin >> index;

    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task deleted successfully.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

int main() {
    vector<Task> tasks;
    int choice;

    do {
        cout << "\nTo-Do List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Complete\n";
        cout << "4. Delete Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                add_Task(tasks);
                break;
            case 2:
                view_Tasks(tasks);
                break;
            case 3:
                mark_Task_Complete(tasks);
                break;
            case 4:
                delete_Task(tasks);
                break;
            case 5:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
