#include <iostream>
using namespace std;

struct Item{
string name;
int qty;
};

int main(){

Item item[10];

for(int i=0;i<3;i++){
cout<<"Name: ";
cin>>item[i].name;

cout<<"Quantity: ";
cin>>item[i].qty;
}

cout<<"\nInventory\n";

for(int i=0;i<3;i++){
cout<<item[i].name<<" "<<item[i].qty<<endl;
}

}