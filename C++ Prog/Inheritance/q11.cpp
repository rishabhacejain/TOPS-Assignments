#include<iostream>
using namespace std;

class Area {
public:
    int a, b;

    void input() {
        cout << "Enter area: ";
        cin >> a;
        cout << "Enter breadth: ";
        cin >> b;
    }
};

class Calculator : public Area {
public:
    int rectangle(int a, int b) {
        return a * b;
    }

    float triangle(int a, int b) {
        return 0.5 * a * b;
    }

    float circle(int a) {
        return 3.14 * a * a;
    }

    void display() {
        cout << "\nArea of rectangle: " << rectangle(a, b) << endl;
        cout << "Area of triangle: " << triangle(a, b) << endl;
        cout << "Area of circle: " << circle(a) << endl;
    }
};

int main() {
    Calculator c;
    c.input();
    c.display();
    return 0;
}
