#include <iostream>
using namespace std;

int seats = 20;

void showSeats() {
    cout << "Available Seats = " << seats << endl;
}

void bookTicket() {
    int num;

    cout << "Enter seats to book: ";
    cin >> num;

    if (num <= seats) {
        seats -= num;
        cout << "Booking Successful\n";
    }
    else {
        cout << "Not Enough Seats\n";
    }
}

int main() {

    int choice;

    do {
        cout << "\n--- Ticket Booking ---\n";

        cout << "1. Show Seats\n";
        cout << "2. Book Ticket\n";
        cout << "3. Exit\n";

        cin >> choice;

        switch(choice) {

            case 1:
                showSeats();
                break;

            case 2:
                bookTicket();
                break;

            case 3:
                break;

            default:
                cout << "Invalid\n";
        }

    } while(choice != 3);

    return 0;
}