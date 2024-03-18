#include<iostream>
using namespace std;

class Swapper {
private:
    int num1, num2;

public:
    void input() {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
    }

    void display() {
        cout << "\nnum1: " << num1 << endl;
        cout << "num2: " << num2 << endl;
    }

    // Declaration of friend function
    friend void swapValues(Swapper&);
};

// Definition of friend function
void swapValues(Swapper& s) {
    s.num1 = s.num1 + s.num2;
    s.num2 = s.num1 - s.num2;
    s.num1 = s.num1 - s.num2;
}

int main() {
    Swapper s;
    s.input();

    cout << "\nBefore swapping:\n";
    s.display();

    // Call to friend function to swap values
    swapValues(s);

    cout << "\nAfter swapping:\n";
    s.display();

    return 0;
}
