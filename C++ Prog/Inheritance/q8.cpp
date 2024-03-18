#include<iostream>
using namespace std;

class calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    int sub(int a, int b) {
        return a - b;
    }
    
    int mul(int a, int b) {
        return a * b;
    }
    
    // Overloaded division function with integer parameters
    int div(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Cannot divide by zero";
            return 0; // or any other value indicating error
        }
    }
};

int main() {
    calculator c;
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "\nAddition: " << c.add(num1, num2);
    cout << "\nSubtraction: " << c.sub(num1, num2);
    cout << "\nMultiplication: " << c.mul(num1, num2);
    
    int result = c.div(num1, num2);
    if (num2 != 0) {
        cout << "\nDivision: " << result;
    }
    
    return 0;
}
