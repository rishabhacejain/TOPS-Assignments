#include<iostream>
using namespace std;

class cricketer {
public:
    string name;
    int age;

    // Function to get cricketer data
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class batsman : public cricketer {
public:
    int run, match, avrun;

    // Function to set batsman data
    void setData() {
        cout << "Enter total runs: ";
        cin >> run;
        cout << "Enter total matches: ";
        cin >> match;

        // Calculate average runs
        avrun = run / match;

        // Display batsman data
        cout << endl << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total runs: " << run << endl;
        cout << "Total matches: " << match << endl;
        cout << "Average runs: " << avrun << endl;

        // Display batsman performance
        if (avrun >= 80) {
            cout << "Best player" << endl;
        } else if (avrun >= 40) {
            cout << "Average player" << endl;
        } else {
            cout << "Bad player" << endl;
        }
    }
};

int main() {
    batsman b;
    b.getData(); 
    b.setData(); 
    return 0;
}
