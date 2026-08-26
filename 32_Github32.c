// Q32- Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int a, i, flag = 0;

    printf("Enter the number a: ");
    scanf("%d", &a);

    if (a <= 1) {
        printf("%d is not a prime number\n", a);
    } else {
        for (i = 2; i <= a / 2; i++) {
            if (a % i == 0) {
                flag = 1;  // found a divisor
                break;
            }
        }

        if (flag == 0)
            printf("%d is a prime number\n", a);
        else
            printf("%d is not a prime number\n", a);
    }

    return 0;
}
