#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter size of matrix: ";
    cin >> n;

    int arr[10][10];

    cout << "Enter elements:\n";

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> arr[i][j];

    bool symmetric = true;

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(arr[i][j] != arr[j][i]) {
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric)
        cout << "Symmetric Matrix";
    else
        cout << "Not Symmetric";

    return 0;
}