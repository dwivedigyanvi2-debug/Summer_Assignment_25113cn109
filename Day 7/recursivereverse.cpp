#include <iostream>
using namespace std;

void reverse(int n){
    int rem,reverse=0;
    for(int i=0;i<=n;i++){
    rem = n%10;
    reverse = reverse*10 + rem;
    n = n/10;
    }
    cout<<reverse;

}
int main(){
    int n;
    cout<<"Enter a number: "<<" "<<endl;
    cin>>n;
    reverse(n);
    return 0;
}