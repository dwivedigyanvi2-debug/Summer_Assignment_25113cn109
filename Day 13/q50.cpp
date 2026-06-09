#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;

    vector <int> arr(n);
    int sum=0;

    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Array elements are: "<<endl;
    for(int i=0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0; i < n ; i++){
        sum += arr[i];
    }
    cout<<endl;
    cout<<"Sum: " <<sum<<endl;
    
    float avg = (float)sum/n;
    cout<<"Average: "<<avg<<endl;


 return 0;
}