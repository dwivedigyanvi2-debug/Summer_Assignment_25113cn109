#include <bits/stdc++.h>
using namespace std;

void pyramid(int n){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
     }
}


int main() {
    int n;
    cout<<"Enter number of rows: "<<" "<<endl;
    cin>>n;
    pyramid(n);
 return 0;
}
