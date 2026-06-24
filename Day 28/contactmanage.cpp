#include <iostream>
using namespace std;

string name, phone;

void addContact() {
    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Number: ";
    cin >> phone;

    cout << "Contact Saved\n";
}

void showContact() {
    cout << "\nName: " << name << endl;
    cout << "Phone: " << phone << endl;
}

int main() {

    int choice;

    do {

        cout << "\n--- Contact Management ---\n";

        cout << "1. Add Contact\n";
        cout << "2. Show Contact\n";
        cout << "3. Exit\n";

        cin >> choice;

        switch(choice) {

            case 1:
                addContact();
                break;

            case 2:
                showContact();
                break;

            case 3:
                break;

            default:
                cout << "Invalid\n";
        }

    } while(choice != 3);

    return 0;
}