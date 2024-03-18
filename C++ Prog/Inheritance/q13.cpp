#include<iostream>
using namespace std;

class Number {
private:
    int num1, num2;

public:
    void inputData() {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
    }

    friend void findMax(Number& n);
};

void findMax(Number& n) {
    if (n.num1 > n.num2) {
        cout << "\nMax number: " << n.num1;
    } else {
        cout << "\nMax number: " << n.num2;
    }
}

int main() {
    Number n;
    n.inputData();
    findMax(n);
    return 0;
}
