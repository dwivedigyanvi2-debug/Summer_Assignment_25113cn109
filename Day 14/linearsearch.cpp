#include <bits/stdc++.h>
using namespace std;

int search(int array[], int n , int x){

    for(int i =0 ; i<n ; i++){
        if(array[i] == x)
        return i;
        
    }
    return -1;
}


int main() {
    
    int array[5];
    for(int i=0 ; i<5 ; i++){
        cin>>array[i];
    }


    int x ;
    cout<<"Enter element to be found: ";
    cin>>x;

    int n = sizeof(array) / sizeof(array[0]);

    int result = search(array , n , x);

    (result == -1)? cout<<"Element not found " : cout<<"Element found at index: "<<result;

 return 0;
}