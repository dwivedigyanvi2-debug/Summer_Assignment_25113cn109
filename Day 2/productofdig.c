#include <stdio.h>
int main(){
    
    int n , product=1 , i ,rem;
    printf("Enter a number - \n");\
    scanf("%d",&n);

    while(n!=0){
        rem=n%10;
        product = product *rem;
        n = n/10;
    }
    printf("The product of the number is - %d\n",product);
    return 0;
}