#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    
    int i = 0, j = 0, k = 0;
    while (i < n) {

        
        while (k <= n - i - 2) {
            cout << " ";
            k++;
        }
        k = 0;

        
        while (j <= i) {
            cout << "* ";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
}

