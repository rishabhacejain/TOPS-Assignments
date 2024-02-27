#include<iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    int balance;

public:
    // Function to set account number and balance
    void setData() {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter balance: ";
        cin >> balance;
    }

    // Function to deposit money
    void deposit() {
        int depositAmount;
        cout << "Enter deposit amount: ";
        cin >> depositAmount;
        balance += depositAmount;
        cout << "After deposit, balance is: " << balance << endl;
    }

    // Function to withdraw money
    void withdraw() {
        int withdrawAmount;
        cout << "Enter withdrawal amount: ";
        cin >> withdrawAmount;
        if (withdrawAmount <= balance) {
            balance -= withdrawAmount;
            cout << "After withdrawal, balance is: " << balance << endl;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }
};

int main() {
    BankAccount account;
    account.setData();
    account.deposit();
    account.withdraw();
    return 0;
}
