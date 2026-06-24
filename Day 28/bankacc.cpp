#include <iostream>
using namespace std;

double balance = 5000;

void checkBalance() {
    cout << "Current Balance = " << balance << endl;
}

void deposit() {
    double amount;
    cout << "Enter Amount: ";
    cin >> amount;

    balance += amount;
    cout << "Deposited Successfully\n";
}

void withdraw() {
    double amount;

    cout << "Enter Amount: ";
    cin >> amount;

    if (amount <= balance) {
        balance -= amount;
        cout << "Withdrawal Successful\n";
    }
    else {
        cout << "Insufficient Balance\n";
    }
}

int main() {

    int choice;

    do {
        cout << "\n--- Bank System ---\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";

        cin >> choice;

        switch(choice) {
            case 1: checkBalance(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: break;
            default: cout << "Invalid\n";
        }

    } while(choice != 4);

    return 0;
}