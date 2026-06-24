#include <iostream>
using namespace std;

int books = 10;

void showBooks() {
    cout << "Available Books: " << books << endl;
}

void issueBook() {
    if (books > 0) {
        books--;
        cout << "Book Issued Successfully\n";
    } else {
        cout << "No books available\n";
    }
}

void returnBook() {
    books++;
    cout << "Book Returned Successfully\n";
}

int main() {
    int choice;
    

    do {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Show Books\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. Exit\n";
        cout<<"Enter choice:";
        cin >> choice;

        switch (choice) {
            case 1: showBooks(); break;
            case 2: issueBook(); break;
            case 3: returnBook(); break;
            case 4: cout << "Exit\n"; break;
            default: cout << "Invalid Choice\n";
        }

    } while (choice != 4);

    return 0;
}