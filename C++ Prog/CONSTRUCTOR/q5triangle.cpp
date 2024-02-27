#include<iostream>
using namespace std;

class Triangle {
private:
    int a, b, c;

public:
    // Function to determine the type of triangle
    void data(int side1, int side2, int side3) {
        a = side1;
        b = side2;
        c = side3;

        if (a == b && b == c) {
            cout << "Equilateral triangle" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Isosceles triangle" << endl;
        } else {
            cout << "Scalene triangle" << endl;
        }
    }
};

int main() {
    int side1, side2, side3;
    cout << "Enter the lengths of the three sides of the triangle:" << endl;
    cout << "Side 1: ";
    cin >> side1;
    cout << "Side 2: ";
    cin >> side2;
    cout << "Side 3: ";
    cin >> side3;

    Triangle t;
    t.data(side1, side2, side3);

    return 0;
}
