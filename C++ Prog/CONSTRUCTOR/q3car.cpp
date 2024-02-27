#include<iostream>
using namespace std;

class Car {
private:
    string company, model;
    int year;

public:
    void getdeta() {
        cout << "Enter company Name: ";
        cin >> company;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter year: ";
        cin >> year;
    }

    void setdeta() {
        cout << endl << "Company Name: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car c;
    c.getdeta();
    c.setdeta();
    return 0;
}
