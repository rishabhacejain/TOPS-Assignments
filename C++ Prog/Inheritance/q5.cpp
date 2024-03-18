// Assume that the test results of a batch of students are stored in three different
// classes. Class Students are storing the roll number. Class Test stores the
// marks obtained in two subjects and class result contains the total marks
// obtained in the test. The class result can inherit the details of the marks
// obtained in the test and roll number of students. (Multilevel Inheritance)


#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

public:
    void data() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll;
    }
};

class Test : public Student {
public:
    int english, math;

public:
    void marks() {
        cout << "Enter English marks: ";
        cin >> english;
        cout << "Enter Math marks: ";
        cin >> math;
    }
};

class Result : public Test {
public:
    void show() {
        cout << "\n------ Result ------\n";
        cout << "Name: " << name << endl;
        cout << "Roll number: " << roll << endl;
        cout << "English marks: " << english << endl;
        cout << "Math marks: " << math << endl;
        cout << "Total marks: " << (english + math) << endl;
    }
};

int main() {
    Result r;
    r.data();
    r.marks();
    r.show();
    return 0;
}
