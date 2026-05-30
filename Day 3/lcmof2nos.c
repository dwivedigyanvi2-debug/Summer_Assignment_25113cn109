#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1,n2,max,lcm;
    printf("Enter two positive integers: \n");
    scanf("%d%d",&n1,&n2);

    max = (n1>n2)?n1:n2;
    while(1){
        if(max%n1 ==0 && max % n2==0){
            lcm = max;
            break;
        }
        ++max;
    }
    printf("LCM of the number is %d\n",lcm);
    return 0;
}