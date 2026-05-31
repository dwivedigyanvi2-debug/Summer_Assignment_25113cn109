#include <stdio.h>
int main(){
    int n,i,result=0,rem;
    printf("Enter the number - ");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        rem=n%10;
        result = result + (rem*rem*rem);
        n=n/10;
    }
    if(n=result){
        printf("Armstrong number");
    }
    else{
        printf("Not armstrong number");
    }
        return 0;
}