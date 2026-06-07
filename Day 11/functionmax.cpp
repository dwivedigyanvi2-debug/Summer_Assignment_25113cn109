#include <bits/stdc++.h>
using namespace std;

int maxtwono(int x, int y)
{
    int max;
    
    if(x>y)
    return x;

    else
    return y;

}

int main() {
     
     int x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;

    cout<<"Maximum number is : "<<maxtwono(x,y);
     return 0;
}