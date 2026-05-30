#include <stdio.h>
int main() {
   int start, end, n, i, isPrime;
   printf("Enter starting number of range: ");
   scanf("%d", &start);
   printf("Enter ending number of range: ");
   scanf("%d", &end);
   printf("Prime numbers between %d and %d are:\n", start, end);
   for (n = start; n <= end; n++) {
       if (n < 2)
           continue; 
       isPrime = 1; 
       
       for (i = 2; i * i <= n; i++) {
           if (n % i == 0) {
               isPrime = 0; 
               break;
           }
       }
       if (isPrime)
           printf("%d ", n);
   }
   printf("\n");
   return 0;
}