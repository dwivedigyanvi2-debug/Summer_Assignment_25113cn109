#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    srand((unsigned int)time(NULL));

    int number = (rand()%100) + 1;
    int guess = 0;
    cout<<"__NUMBER GUESSING GAME__"<<endl;
    cout<<endl<<endl;
    
    do{
         cout<<"Enter number(1-100)"<<endl;
         cin>>guess;

        if(number>guess){
            cout<<"Guess higher"<<endl;
        }
        else if(number<guess){
            cout<<"Guess lower"<<endl;
        }
        else{
            cout<<"You WON"<<endl;
        }


    }while( guess != number);

    return 0;
}