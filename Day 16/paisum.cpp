#include <bits/stdc++.h>
using namespace std;

vector <int> pairsum(vector<int>arr , int n , int target)
{
    int i = 0;
    int j = n-1;
    vector<int>ans;

    while(i<j){
        int pairsum = arr[i] + arr[j];
        if(pairsum > target){
              j--;
        }
        else if(pairsum < target){
              i++;
        } 
        else{
        ans.push_back(i);
        ans.push_back(j);
         return ans;
        }
    }
   
}

int main() {
    
    vector <int> arr = {1,2,4,7,8};
    int n = arr.size();
    int target = 11;
    
   
    vector<int>ans = pairsum(arr , n , target);
     cout<<"The index of the pair is:" ;
     for(int i = 0 ; i < ans.size(); i++){
        cout<<ans[i]<<"  ";
     }



 return 0;
}