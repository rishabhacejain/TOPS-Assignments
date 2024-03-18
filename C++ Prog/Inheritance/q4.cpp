// Write a C++ Program display Student Mark sheet using Multiple inheritance
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void details() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll;
    }
};

class Sheet {
public:
    int math, english, science, computer, total;

    void subjects() {
        cout << "\n----- Enter marks -----\n";
        cout << "Math: ";
        cin >> math;
        cout << "English: ";
        cin >> english;
        cout << "Science: ";
        cin >> science;
        cout << "Computer: ";
        cin >> computer;

        total = math + english + science + computer;
    }
};

class MarkSheet : public Student, public Sheet {
public:
    void display() {
        cout << "\n------ Student Mark sheet ------\n";
        cout << "Name: " << name << endl;
        cout << "Roll number: " << roll << endl;
        cout << "\nMath: " << math << endl;
        cout << "English: " << english << endl;
        cout << "Science: " << science << endl;
        cout << "Computer: " << computer << endl;
        cout << "\nTotal marks: " << total << endl;
    }
};

int main() {
    MarkSheet m;
    m.details();
    m.subjects();
    m.display();
    return 0;
}
