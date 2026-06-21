#include <iostream>
using namespace std;

int main() {
    string names[] = {"Gyanvi", "Aman", "Riya", "Dev"};
    int n = 4;

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(names[i] > names[j]) {
                swap(names[i], names[j]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}