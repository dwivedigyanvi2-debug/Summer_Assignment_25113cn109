#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter number of elements of array"<<endl;
    cin>>n;
    
    int a[n];

    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<n ; i++){
        cin>>a[i];
    }

    cout<<"The array is: "<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }


 return 0;
}