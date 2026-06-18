#include <iostream>
using namespace std;

int main() {
    char str[200];

    cout << "Enter sentence: ";
    cin.getline(str, 200);

    int words = 1;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            words++;
    }

    cout << "Total words = " << words;

    return 0;
}