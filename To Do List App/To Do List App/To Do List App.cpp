#include <iostream>  // Includes the iostream library for input and output operations
#include <vector>    // Includes the vector library to use the vector container
#include <string>    // Includes the string library to use the string class

using namespace std; // Use the standard namespace to avoid prefixing std::

int main() {
    vector<string> tasks; // Create a vector to store the list of tasks
    int choice;           // Variable to store the user's menu choice
    string task;          // Variable to store a task description

    while (true) {        // Here we start an infinite loop to keep the application running
        // Displays the menu options
        cout << "1. Add Task\n";          // Option to add a task
        cout << "2. View Tasks\n";        // Option to view all tasks
        cout << "3. Remove Task\n";       // Option to remove a specific task
        cout << "4. Exit\n";              // Option to exit the application
        cout << "Enter your choice: ";    // Prompt user to enter their choice
        cin >> choice;                    // Readsthe users input forthe menu choice
        cin.ignore();                     // Ignore the newline character left in the buffer

        switch (choice) {                 // Switch statement to handle user choices for 3 choices to keep it simple..
        case 1:                       // Case for adding a task
            cout << "Enter task: ";   // Prompts the user to enter a task..
            getline(cin, task);       // Read the entire line of input for the task
            tasks.push_back(task);    // Add the task to the vector
            break;                   // Breaks the switch case so it doesn't run the subsequent case.

        case 2:                       // Second case for viewing tasks
            cout << "Tasks:\n";       // Display the "Tasks:" heading
            for (size_t i = 0; i < tasks.size(); ++i) { // Loop through the vector of tasks
                cout << i + 1 << ". " << tasks[i] << endl; // Display each task with its number
            }
            break;                   // Breaks the switch case...

        case 3:                       // Last case for removing a task
            int index;                // Variable to store the index of the task to remove
            cout << "Enter task number to remove: "; // Prompt user to enter the task number to remove
            cin >> index;            // Read user input for task number
            if (index > 0 && index <= tasks.size()) { // Check if the input is within the valid range
                tasks.erase(tasks.begin() + index - 1); // Remove the task from the vector
            }
            else {
                cout << "Invalid task number" << endl; // Display an error message for invalid input
            }
            break;                   // Breaks the switch case...

        case 4:                       // Case for exiting the application
            return 0;                // Exits the program with status code 0

        default:                     // Standard default case for handling invalid choices
            cout << "Invalid choice" << endl; // Display an error message for invalid choices
            break;                   // Breaks the switch case...
        }
    }

    return 0; // End of the main function
}
