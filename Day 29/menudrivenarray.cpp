#include <iostream>
using namespace std;

int main() {

int n;
cout<<"Enter size: ";
cin>>n;

int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int choice;

do{

cout<<"\n1.Display\n2.Sum\n3.Maximum\n4.Exit\n";
cin>>choice;

switch(choice){

case 1:
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
break;

case 2:{
int sum=0;
for(int i=0;i<n;i++)
sum+=arr[i];

cout<<"Sum="<<sum;
break;
}

case 3:{
int mx=arr[0];

for(int i=1;i<n;i++)
if(arr[i]>mx)
mx=arr[i];

cout<<"Max="<<mx;
break;
}

}

}while(choice!=4);

}