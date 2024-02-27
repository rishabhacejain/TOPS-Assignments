#include<iostream>
using namespace std;

class Account {
public:
    string name, ac_type;
    int ac_num, curr_amt = 50000;

    void details() {
        cout << "------------------Enter Details--------------------" << endl;
        cout << "Name of the depositor: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Account number: ";
        cin >> ac_num;
        cout << "Type of account: ";
        cin >> ac_type;
    }

    void deposit() {
        int d_amt;
        cout << "Enter deposit amount: ";
        cin >> d_amt;
        curr_amt += d_amt;
        cout << "After deposit, balance: " << curr_amt << endl;
    }

    void withdraw() {
        int w_amt;
        cout << "Enter withdrawal amount: ";
        cin >> w_amt;
        if (w_amt > curr_amt) {
            cout << "Insufficient funds!" << endl;
        } else {
            curr_amt -= w_amt;
            cout << "After withdrawal, balance: " << curr_amt << endl;
        }
    }

    void checkBalance() {
    
        cout<<"Dear "<<name;   
        cout << " Your Current balance is: " << curr_amt << endl;

    }
};

int main() {
    Account ac;
    ac.details();

    int choice;
    do {
        cout << "\n------------------Menu--------------------" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                ac.deposit();
                break;
            case 2:
                ac.withdraw();
                break;
            case 3:
                ac.checkBalance();
                break;
            case 4:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
