#include <bits/stdc++.h>
using namespace std;


void palindrome(int n)
{ 
    int sum = 0;
    int dup = n;

    while(n>0){
        int ld = n % 10;
        sum = sum * 10 + ld;
        n = n / 10;
    }

    if(sum == dup)
    cout<<"Number is palindrome number";
    else
    cout<<"Number is not palindrome number";
}

int main() {
     
    int n ;
    cout << "Enter a number: ";
    cin>>n;

    palindrome(n);
    
 return 0;
}