// Q35- Write a program to print all factors of a given number.

#include <stdio.h>

int main() {
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("\n\tAll the factors of %d are: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
