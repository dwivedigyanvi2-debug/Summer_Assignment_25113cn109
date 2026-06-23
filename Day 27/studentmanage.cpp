#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;

            cout << "Enter Roll No: ";
            cin >> s.roll;

            cout << "Enter Name: ";
            cin >> s.name;

            cout << "Enter Marks: ";
            cin >> s.marks;

            students.push_back(s);
        }

        else if (choice == 2) {
            cout << "\nStudent Records:\n";

            for (Student s : students) {
                cout << "Roll: " << s.roll<<endl
                     << " Name: " << s.name<<endl
                     << " Marks: " << s.marks << endl;
            }
        }

    } while (choice != 3);

    return 0;
}