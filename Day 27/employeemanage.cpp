#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {

    vector<Employee> emp;
    int choice;

    do {
        cout << "\n1.Add Employee";
        cout << "\n2.Display Employee";
        cout << "\n3.Exit";
        cout<<"\nEnter choice";

        cin >> choice;

        if (choice == 1) {

            Employee e;

            cout << "Enter ID: ";
            cin >> e.id;

            cout << "Enter Name: ";
            cin >> e.name;

            cout << "Enter Salary: ";
            cin >> e.salary;

            emp.push_back(e);
        }

        else if (choice == 2) {

            for (Employee e : emp) {
                cout << "\nID: " << e.id;
                cout << "\nName: " << e.name;
                cout << "\nSalary: " << e.salary;
            }
        }

    } while (choice != 3);

    return 0;
}