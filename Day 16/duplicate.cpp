#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        bool duplicate = false;

        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {1,2,2,3,4,4,5};

    int n = 7;

    removeDuplicate(arr,n);

    return 0;
}