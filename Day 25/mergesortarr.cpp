#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    int n = 3, m = 3;
    int i = 0, j = 0;

    while(i < n && j < m) {
        if(arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
        else
            cout << arr2[j++] << " ";
    }

    while(i < n)
        cout << arr1[i++] << " ";

    while(j < m)
        cout << arr2[j++] << " ";

    return 0;
}