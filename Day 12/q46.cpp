#include <bits/stdc++.h>
using namespace std;


void armstrong(int n)
{ 
    int sum = 0;
    int dup = n;

    while(n>0){
        int ld = n % 10;
        sum = sum + (ld*ld*ld);
        n = n / 10;
    }

    if(sum == dup)
    cout<<"Number is armstrong number";
    else
    cout<<"Number is not armstrong number";
}

int main() {
     
    int n ;
    cout << "Enter a number: ";
    cin>>n;

     armstrong(n);
    
 return 0;
}