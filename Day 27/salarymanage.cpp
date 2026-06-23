#include <iostream>
using namespace std;

int main() {

    string name;
    float basic, bonus, total;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    cout << "Enter Bonus: ";
    cin >> bonus;

    total = basic + bonus;

    cout << "\nEmployee: " << name;
    cout << "\nTotal Salary: " << total;

    return 0;
}