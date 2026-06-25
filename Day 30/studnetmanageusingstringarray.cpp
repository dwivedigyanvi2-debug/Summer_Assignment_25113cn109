#include <iostream>
using namespace std;

int total=0;

void add(string name[],int marks[]){

cout<<"Enter Name: ";
cin>>name[total];

cout<<"Enter Marks: ";
cin>>marks[total];

total++;

}

void result(string name[],int marks[]){

for(int i=0;i<total;i++){

cout<<"\n"<<name[i];
cout<<" -> "<<marks[i];

if(marks[i]>=40)
cout<<" Pass";

else
cout<<" Fail";

}

}

void average(int marks[]){

int sum=0;

for(int i=0;i<total;i++)

sum+=marks[i];

cout<<"Average = "<<sum/total;

}

int main(){

string name[100];
int marks[100];

int choice;

do{

cout<<"\n1.Add\n2.Result\n3.Average\n4.Exit\n";

cin>>choice;

switch(choice){

case 1:
add(name,marks);
break;

case 2:
result(name,marks);
break;

case 3:
average(marks);
break;

}

}while(choice!=4);

}