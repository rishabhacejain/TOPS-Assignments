#include<iostream>
using namespace std;

class Calculator {
    int a, b;
public:
    void getNumbers() {
        cout << "\nEnter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }

    int add() {
        return a + b;
    }

    int subtract() {
        return a - b;
    }

    int multiply() {
        return a * b;
    }

    float divide() {
    if (b == 0) {
        cout << "Error! Division by zero!";
        return 0;
    }
    else {
        
        return (float)a / b;
    }
}

};

int main() {
    int choice;
    char op;
    Calculator calc;

    cout << "---------------------Menu-----------------------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    do {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                calc.getNumbers();
                cout << "Result: " << calc.add() << endl;
                break;
            case 2:
                calc.getNumbers();
                cout << "Result: " << calc.subtract() << endl;
                break;
            case 3:
                calc.getNumbers();
                cout << "Result: " << calc.multiply() << endl;
                break;
            case 4:
                calc.getNumbers();
                cout << "Result: " << calc.divide() << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
                break;
        }
        
        cout << "------------------------------------------------------------" << endl;
        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> op;
        

    } while (op == 'y' || op == 'Y');

    cout << "\n-----------------------Thank you--------------------------" << endl;

    return 0;
}
