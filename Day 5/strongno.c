#include <stdio.h>
int main() {
   int num, originalNum, lastDigit, i;
   long fact;
   int sum = 0;
   printf("Enter any number to check Strong number: ");
   scanf("%d", &num);
   originalNum = num;
   while (num > 0) {
       lastDigit = num % 10;
       fact = 1;
       for (i = 1; i <= lastDigit; i++) {
           fact *= i;
       }
       sum += fact;
       num /= 10;
   }
   if (sum == originalNum)
       printf("%d is STRONG NUMBER\n", originalNum);
   else
       printf("%d is NOT STRONG NUMBER\n", originalNum);
   return 0;
}