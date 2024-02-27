#include<iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    // Function to set date
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Function to validate date
    bool isValidDate() {
        if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
            return false;
        }
        
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                return day <= 29;
            } else {
                return day <= 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            return day <= 30;
        } else {
            return day <= 31;
        }
    }
};

int main() {
    int d, m, y;
    cout << "Enter day: ";
    cin >> d;
    cout << "Enter month: ";
    cin >> m;
    cout << "Enter year: ";
    cin >> y;

    Date date;
    date.setDate(d, m, y);

    if (date.isValidDate()) {
        cout << "Valid date" << endl;
    } else {
        cout << "Invalid date" << endl;
    }

    return 0;
}
