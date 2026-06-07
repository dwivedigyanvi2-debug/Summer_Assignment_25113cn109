#include <bits/stdc++.h>
using namespace std;


int factorial(int n)
{

   int factorial=1;

   for(int i=1; i<=n ; i++){
    factorial = factorial * i;
   }
   
   cout<<factorial;

}

int main() {
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    factorial(n);

 return 0;
}