#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool iscomposite = false;

    for(int i =2; i<=n/2 ; i++){
        if(n%i==0){
            cout<<"Composite";
            iscomposite=true;
            break;
        }
    }
    if(!iscomposite){
        cout<<"Prime";
    }
    return 0;
}