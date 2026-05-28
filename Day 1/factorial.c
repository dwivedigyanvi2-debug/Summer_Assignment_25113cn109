#include <stdio.h>
int main(){
    int n ,i , factorial = 1;
    printf("Enter a number to find factorial - \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial = factorial * i;
    }
    printf("Factorial of the number is = %d",factorial);


    return 0;
}