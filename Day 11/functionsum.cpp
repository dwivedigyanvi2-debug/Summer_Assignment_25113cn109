#include <bits/stdc++.h>
using namespace std;

int sum(int a , int b)
{
    int sum;

    sum = a+b;
    cout<<sum;
    return sum;
}

int main() {
    
    int a , b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    sum(a,b);


 return 0;
}