#include <iostream>
using namespace std;

int main() {
    string words[] = {"apple", "hi", "banana", "cat"};
    int n = 4;

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(words[i].length() > words[j].length()) {
                swap(words[i], words[j]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}