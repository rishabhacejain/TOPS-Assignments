#include<iostream>
using namespace std;

class Person {
private:
    int age;
    string name, country;

public:
    void setdata() {
        cout << "Enter name: ";
        getline(cin,name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter country: ";
        cin >> country;
    }

    void getdata() {
        cout << endl << "--------------Person Details------------------" << endl;
        cout << "Person name: " << name << endl;
        cout << "Person age: " << age << endl;
        cout << "Person country: " << country << endl;
    }
};

int main() {
    Person p;
    p.setdata();
    p.getdata();

    return 0;
}
