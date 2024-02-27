#include<iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    void getdata() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    float area() {
        return 3.14 * radius * radius;
    }

    float circumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    Circle c;
    c.getdata();
    cout << "Area of circle is: " << c.area() << endl;
    cout << "Circumference is: " << c.circumference() << endl;

    return 0;
}
