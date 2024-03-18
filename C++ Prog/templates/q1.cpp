#include<iostream>
using namespace std;

template <class T>
void Swap(T &x, T &y){
    T temp = x;
    x = y;
    y = temp;
}

int main(){
    // Input two values
    int x,y;
    cout << "Enter value 1: ";
    cin >> x;

    cout << "Enter value 2: ";
    cin >> y;

    // Display values before swapping
    cout << "\nBefore Swap:" << endl;
    cout << "Value 1: " << x << endl;
    cout << "Value 2: " << y << endl;

    // Swap the values
    Swap(x, y);

    // Display values after swapping
    cout << "\nAfter Swap:" << endl;
    cout << "Value 1: " << x << endl;
    cout << "Value 2: " << y << endl;

    return 0;
}
