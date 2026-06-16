#include <iostream>
using namespace std;

int main() {

    int r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int arr[10][10];

    cout << "Enter elements:\n";

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> arr[i][j];

    for(int j=0;j<c;j++) {

        int sum = 0;

        for(int i=0;i<r;i++) {
            sum += arr[i][j];
        }

        cout << "Column " << j+1 << " Sum = " << sum << endl;
    }

    return 0;
}