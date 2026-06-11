#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 2, 0, 3, 4};
    int n = 6;

    int j = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}