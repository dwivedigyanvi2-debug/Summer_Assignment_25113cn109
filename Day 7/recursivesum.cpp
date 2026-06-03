#include <iostream>
using namespace std;

void sumofdigits(int n){
    int sum=0,digit;
    for(int i=0;i<=n;i++){
      digit = n%10;
      sum += digit;
      n = n/10;
    }
    cout<<sum;
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    sumofdigits(n);
    return 0;
}
