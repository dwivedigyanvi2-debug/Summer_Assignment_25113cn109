#include <iostream>
using namespace std;

int total=0;

void addBook(string book[]){

cout<<"Enter Book Name: ";
cin.ignore();

getline(cin,book[total]);

total++;

}

void display(string book[]){

for(int i=0;i<total;i++){

cout<<i+1<<". "<<book[i]<<endl;

}

}

void search(string book[]){

string find;

cin.ignore();

cout<<"Enter Book: ";

getline(cin,find);

for(int i=0;i<total;i++){

if(book[i]==find){

cout<<"Book Available";
return;

}

}

cout<<"Book Not Found";

}

int main(){

string book[100];

int choice;

do{

cout<<"\n1.Add\n2.Display\n3.Search\n4.Exit\n";

cin>>choice;

switch(choice){

case 1:
addBook(book);
break;

case 2:
display(book);
break;

case 3:
search(book);
break;

}

}while(choice!=4);

}