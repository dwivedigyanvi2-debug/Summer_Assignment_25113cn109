#include <iostream>
using namespace std;

void factorial(int n){
    int factorial = 1;
    for(int i=1;i<=n;i++){
        factorial = factorial*i;
        
    }
    cout<<factorial;
}
int main(){
    int n;
    cout<<"Enter number: "<<" "<<endl;
    cin>>n;
    factorial(n);
    return 0;
}