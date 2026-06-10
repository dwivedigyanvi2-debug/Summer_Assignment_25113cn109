#include <bits/stdc++.h>
using namespace std;

int frequency(int arr[], int n , int x)
{
    int count = 0;

   for(int i = 0 ; i < n ;i++){
        if(arr[i] == x){
            count++;
         }
    
   }
   cout<<"Frequency of"<<" "<< x<<" "<<"is"<<" "<<count;
   return 0;
}

int main() {
    int n ;
    cout<<"Enter no. of elements of array: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter array elements: "<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    
    int x;
    cout<<"Enter element to be found: "<<endl;
    cin>>x;

    frequency(arr,n,x);
 return 0;
}