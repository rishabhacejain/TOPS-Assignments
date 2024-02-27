#include<iostream>
using namespace std;

class calculater {
private:
    int a, b;

public:
    // Constructor to initialize values of a and b
    calculater(int num1, int num2) {
        a = num1;
        b = num2;
    }

    int add() {
        return a + b;
    }

    int sub() {
        return a - b;
    }

    int mul() {
        return a * b;
    }

    int div() {
        if (b != 0) {
            return a / b;
        }
        else {
            cout << "Cannot divide by zero";
            return 0;
        }
    }
};

int main() {
    int num1, num2;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    calculater c(num1, num2); // Create an object of the calculater class with num1 and num2

    cout << "Addition: " << c.add() << endl;
    cout << "Subtraction: " << c.sub() << endl;
    cout << "Multiplication: " << c.mul() << endl;
    cout << "Division: " << c.div() << endl;

    return 0;
}
