#include <iostream>
using namespace std;

int total=0;

void add(string name[],int id[]){

cout<<"Enter Name: ";
cin>>name[total];

cout<<"Enter ID: ";
cin>>id[total];

total++;

}

void display(string name[],int id[]){

for(int i=0;i<total;i++){

cout<<"\nName: "<<name[i];
cout<<"\nID: "<<id[i]<<endl;

}

}

void search(string name[],int id[]){

int x;

cout<<"Enter ID: ";
cin>>x;

for(int i=0;i<total;i++){

if(id[i]==x){

cout<<"Employee: "<<name[i];
return;

}

}

cout<<"Not Found";

}

int main(){

string name[100];
int id[100];

int choice;

do{

cout<<"\n1.Add\n2.Display\n3.Search\n4.Exit\n";

cin>>choice;

switch(choice){

case 1:
add(name,id);
break;

case 2:
display(name,id);
break;

case 3:
search(name,id);
break;

}

}while(choice!=4);

}