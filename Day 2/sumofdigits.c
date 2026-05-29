#include <stdio.h>
int main(){
    int n , i , sum=0 , digit;
    printf("Enter a number - \n");
    scanf("%d",&n);
    for(i =0;i<=n;i++){
     digit = n%10;
     sum = sum + digit;
     n = n/10;
    }
    printf("%d\n",sum);
    return 0;
}