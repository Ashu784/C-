#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int id;
    string position;
    float salary;

    void enterDetails() {
        cout << "Enter employee name: ";
        getline(cin, name);
        cout << "Enter employee ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter employee position: ";
        getline(cin, position);
        cout << "Enter employee salary: ";
        cin >> salary;
        cin.ignore();
    }

    void displayDetails() {
        cout << "Employee name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee position: " << position << endl;
        cout << "Employee salary: " << salary << endl;
    }
};

int main() {
    const int NUM_MANAGERS = 2;
    const int NUM_FOREMEN = 4;
    const int NUM_WORKERS = 17;

    Employee managers[NUM_MANAGERS];
    Employee foremen[NUM_FOREMEN];
    Employee workers[NUM_WORKERS];

    // Enter details for managers
    for (int i = 0; i < NUM_MANAGERS; i++) {
        cout << "Enter details for manager " << i+1 << ":" << endl;
        managers[i].enterDetails();
        cout << endl;
    }

    // Enter details for foremen
    for (int i = 0; i < NUM_FOREMEN; i++) {
        cout << "Enter details for foreman " << i+1 << ":" << endl;
        foremen[i].enterDetails();
        cout << endl;
    }

    // Enter details for workers
    for (int i = 0; i < NUM_WORKERS; i++) {
        cout << "Enter details for worker " << i+1 << ":" << endl;
        workers[i].enterDetails();
        cout << endl;
    }

    // Display details for managers
    for (int i = 0; i < NUM_MANAGERS; i++) {
        cout << "Details for manager " << i+1 << ":" << endl;
        managers[i].displayDetails();
        cout << endl;
    }

    // Display details for foremen
    for (int i = 0; i < NUM_FOREMEN; i++) {
        cout << "Details for foreman " << i+1 << ":" << endl;
        foremen[i].displayDetails();
        cout << endl;
    }

    // Display details for workers
    for (int i = 0; i < NUM_WORKERS; i++) {
        cout << "Details for worker " << i+1 << ":" << endl;
        workers[i].displayDetails();
        cout << endl;
    }

    return 0;
}

