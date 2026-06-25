#include <iostream>
using namespace std;

int countStudent = 0;

void addStudent(string name[], int roll[]) {

    cout<<"Enter Name: ";
    cin>>name[countStudent];

    cout<<"Enter Roll No: ";
    cin>>roll[countStudent];

    countStudent++;

}

void display(string name[], int roll[]) {

    if(countStudent==0){
        cout<<"No records\n";
        return;
    }

    for(int i=0;i<countStudent;i++){

        cout<<"\nStudent "<<i+1<<endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"Roll: "<<roll[i]<<endl;

    }

}

void search(int roll[]) {

int x;

cout<<"Enter Roll: ";
cin>>x;

for(int i=0;i<countStudent;i++){

if(roll[i]==x){

cout<<"Student Found";
return;

}

}

cout<<"Not Found";

}

int main(){

string name[100];
int roll[100];

int choice;

do{

cout<<"\n1.Add\n2.Display\n3.Search\n4.Exit\n";
cin>>choice;

switch(choice){

case 1:
addStudent(name,roll);
break;

case 2:
display(name,roll);
break;

case 3:
search(roll);
break;

}

}while(choice!=4);

}