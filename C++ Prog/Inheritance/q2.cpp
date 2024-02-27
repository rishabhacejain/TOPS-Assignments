#include<iostream>
using namespace std;

class Shape {
public:
    int length;
    int width;
    
    // Function to set the dimensions of the rectangle
    void setData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }   
};

class Rectangle : public Shape {
public:
    int calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    r.setData(); // Set the dimensions of the rectangle
    int area = r.calculateArea(); // Calculate the area
    cout << "Area of Rectangle: " << area << endl;
   
    return 0;
}
