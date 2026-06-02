#include<iostream>
using namespace std;

void decToBin(int n) {
    if (n == 0) return;

    decToBin(n / 2); 
    cout << (n % 2); 
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal == 0)
        cout << "Binary: 0";
    else {
        cout << "Binary: ";
        decToBin(decimal);
    }

    cout << endl;
    return 0;
}