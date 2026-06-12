#include <iostream>
using namespace std;

int missingNumber(int arr[], int n)
{
    int total = (n + 1) * (n + 2) / 2;

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return total - sum;
}

int main()
{
    int arr[] = {1,2,4,5};

    int n = 4;

    cout << "Missing number = "
         << missingNumber(arr,n);
}