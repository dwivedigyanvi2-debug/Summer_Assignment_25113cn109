#include <bits/stdc++.h>
using namespace std;

double balance = 5000;
void checkbalance(){
    cout<<"Your balance is:" <<" "<<balance<<endl;
}

void deposit(){
    double amount;
    cout<<"Enter the amount:"<<endl;
    cin>>amount;

    if(amount>0){
        balance += amount;
        cout<<"₹"<<" "<<amount<<" "<<"deposited successfully"<<endl;
    }
    else
    cout<<"Invalid amount"<<endl;
}

 void withdraw(){

    double amount;
    cout<<"Enter amount to withdraw: "<<endl;
    cin>>amount;

    if(amount>0 && amount <=balance){
        balance = balance - amount;
        cout<<"Please ! Collect your cash."<<endl;
    }
    else
    cout<<"Invalid amount / Insufficient cash"<<endl;
 }


int main() {
    int choice;
     do{
    cout<<"--ATM Menu--"<<endl<<" 1- Check balance"<<endl<<"2- Cash Withdraw"<<endl<<"3- Cash deposit"<<endl<<"4- Exit"<<endl<<"Enter choice: "<<endl;
    cin>>choice;

    switch(choice){

        case 1 :
        checkbalance();
        break;

        case 2:
        withdraw();
        break;

        case 3:
        deposit();
        break;

        case 4:
        cout<<"Thanks for using the ATM";
        break;
        
        default:
        cout<<"Invalid choice";
    }

}while(choice != 4);

 return 0;
}