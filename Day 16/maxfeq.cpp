#include <bits/stdc++.h>
using namespace std;


int max(int arr[] , int n){

    int freq = 0 ;
    int ans = 0;

    for(int i = 0 ; i < n ; i++){

        if(freq == 0){
            ans = arr[i];
        }
        if(arr[i]==ans){
            freq++;
        }
        else
        freq--;
    }
    return ans;

}

int main() {
    
    int arr[] = {1,1,2,1,2};
    cout<<"Maximum element is: "<<max(arr , 5);
    
 return 0;
}