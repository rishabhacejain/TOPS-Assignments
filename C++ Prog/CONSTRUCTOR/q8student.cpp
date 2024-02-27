#include <iostream>
using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    string zipCode;

public:
    // Function to set address details
    void setAddress(string s, string c, string st, string z) {
        street = s;
        city = c;
        state = st;
        zipCode = z;
    }

    // Function to display address details
    void displayAddress() {
        cout << "Address: " << street << ", " << city << ", " << state << ", " << zipCode << endl;
    }
};

class Student {
private:
    string name;
    int cla;
    int mark;
    int roll;
    Address address;

public:
    // Function to set student details
    void setStudentData() {
        cout << "------ Student Detail ------" << endl;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter class: ";
        cin >> cla;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter mark: ";
        cin >> mark;
        
        // Accepting address details
        string street, city, state, zipCode;
        cout << "Enter street: ";
        cin >> street;
        cout << "Enter city: ";
        cin >> city;
        cout << "Enter state: ";
        cin >> state;
        cout << "Enter zip code: ";
        cin >> zipCode;
        address.setAddress(street, city, state, zipCode);
    }

    // Function to calculate grade based on marks
    char calculateGrade() {
        if (mark >= 90) {
            return 'A';
        } else if (mark >= 80) {
            return 'B';
        } else if (mark >= 70) {
            return 'C';
        } else if (mark >= 60) {
            return 'D';
        } else if (mark >= 50) {
            return 'E';
        } else {
            return 'F';
        }
    }

    // Function to display student details
    void displayStudentData() {
        cout << endl << "Name: " << name << endl;
        cout << "Class: " << cla << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Mark: " << mark << endl;
        cout << "Grade: " << calculateGrade() << endl;
        address.displayAddress();
    }
};

int main() {
    Student s;
    s.setStudentData();
    s.displayStudentData();

    return 0;
}
