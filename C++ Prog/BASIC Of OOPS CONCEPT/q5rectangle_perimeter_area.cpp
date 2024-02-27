#include<iostream>
using namespace std;

class Rectangle {
private:
    int width, length;

public:
    void getdata() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    int area() {
        return length * width;
    }

    int perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r;
    r.getdata();
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    
    return 0;
}
