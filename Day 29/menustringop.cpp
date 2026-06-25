#include <iostream>
using namespace std;

int main(){

string s;

cout<<"Enter string: ";
getline(cin,s);

int choice;

do{

cout<<"\n1.Length\n2.Reverse\n3.Exit\n";
cin>>choice;

switch(choice){

case 1:
cout<<s.length();
break;

case 2:

for(int i=s.length()-1;i>=0;i--)
cout<<s[i];

break;

}

}while(choice!=3);

}