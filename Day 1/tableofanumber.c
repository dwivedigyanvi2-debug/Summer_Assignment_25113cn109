#include<stdio.h>
int main(){
    int n , i;
    printf("Enter a number to print table - \n");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
    printf ("%d * %d = %d",n,i,n*i);
    printf("\n");
    }
    return 0;
}