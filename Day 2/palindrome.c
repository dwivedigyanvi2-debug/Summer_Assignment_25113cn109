#include <stdio.h>
int main(){
    int i,n,rev=0,rem;
    printf("Enter a number - \n");
    scanf("%d",&n);
    int temp =n;
    while (n!=0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if(rev==temp){
        printf("Number is palindrome\n");
    }
        else{
            printf("Number is not palindrome\n");
        }
    

    return 0;
}