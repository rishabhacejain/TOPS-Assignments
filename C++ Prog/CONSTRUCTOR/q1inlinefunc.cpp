#include<iostream>
using namespace std;

class line {
public:
    inline int multi(int a, int b) {
        return a * b;
    }

    inline int cube(int a) {
        return a * a * a;
    }
};

int main() {
    line l;
    int num1, num2;
    cout << "Enter num 1: ";
    cin >> num1;
    cout << "Enter num 2: ";
    cin >> num2;
    cout << endl << "Multiplication Value of: "<<num1<<" and "<<num2<<" is "<< l.multi(num1, num2) << endl;
    cout << "Cube of "<<" "<<num1 <<" is "<<l.cube(num1) << endl;
    cout << "Cube of "<<" "<<num2 <<" is "<<l.cube(num2) << endl;

    return 0;
}
