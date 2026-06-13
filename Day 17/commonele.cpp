#include <iostream>
using namespace std;

int main() {

    int arr1[] = {10,20,30,40};
    int arr2[] = {30,40,50,60};

    for(int i=0;i<4;i++){

        for(int j=0;j<4;j++){

            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }

    return 0;
}