#include <stdio.h>
int main(){
    int n,i,digit=0;
    printf("Enter a number - \n");
    scanf("%d",&n);
    
    do{
        n = n/10;
        digit ++;

    }while(n!=0);

    printf("Number of digits : %d\n",digit);
    return 0;
}
