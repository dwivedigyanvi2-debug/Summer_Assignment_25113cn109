#include<stdio.h>

int main() {

    int n, r, dec = 0, base = 1;

    printf("Enter binary number: ");
    scanf("%d", &n);

    while(n > 0) {

        r = n % 10;

        dec = dec + r * base;

        n = n / 10;

        base = base * 2;
    }

    printf("Decimal number = %d", dec);

    return 0;
}