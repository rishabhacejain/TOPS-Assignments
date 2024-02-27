#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    int id, salary, rating, updatedSalary;
    

public:
    // Constructor to initialize member variables
    Employee() {
        name = "";
        id = 0;
        salary = 0;
        rating = 0;
        updatedSalary = 0;
    }

    // Member function to set employee details
    void setData() {
        cout << "Enter employee details:" << endl;
        cout << "Name: ";
        getline(cin, name);
        cout << "ID: ";
        cin >> id;
        cout << "Salary: ";
        cin >> salary;
        cout << "Enter rating (0-9): ";
        cin >> rating;
    }

    // Member function to calculate updated salary based on rating
    void calculateSalary() {
        if (rating >= 0 && rating <= 9) {
            updatedSalary = salary + (rating * 1000); // Example: Each rating point adds 1000 to salary
        }
    }

    // Member function to display employee details
    void showData() {
        cout << "\nEmployee details:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
        cout << "Employee performance rating: " << rating << endl;
        cout << "Updated salary: " << updatedSalary << endl;
    }
};

int main() {
    Employee emp;
    emp.setData(); // Set employee details
    emp.calculateSalary(); // Calculate updated salary
    emp.showData(); // Display employee details
    return 0;
}
