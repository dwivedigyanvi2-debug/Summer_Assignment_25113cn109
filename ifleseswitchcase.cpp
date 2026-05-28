#include <iostream>
using namespace std;
int main(){
       int age;
       cout<<"Enter your age";
       cin>>age;
       //if(age<18){
        //cout<<"You can't come to party";
       //}
       //else if (age==18){
        //cout<<"You will get kid's pass";
       //}
       //else{
        //cout<<"You can come to the party";
    //}

    switch(age)
    {
    case 18:
        cout<<"You are 18";
        break;

    case 22:
        cout<<"You are 22";
        break;

    default :
        cout<<"No special cases";
        break;
    }
    
    return 0;
}