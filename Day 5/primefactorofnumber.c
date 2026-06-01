#include <stdio.h>
#include <math.h>
void primeFactors(int n) {
   while (n % 2 == 0) {
       printf("%d ", 2);
       n /= 2;
   }
   for (int i = 3; i <= sqrt(n); i += 2) {
       while (n % i == 0) {
           printf("%d ", i);
           n /= i;
       }
   }
   if (n > 2) {
       printf("%d ", n);
   }
}
int main() {
   int num ;
   printf("Enter the number - ");
   scanf("%d",&num); 
   printf("Prime factors of %d are: ", num);
   primeFactors(num);
   return 0;
}