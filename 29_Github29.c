// Q29- Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;  // use long long because factorial grows very fast

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Factorial calculation
    if (n < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;   // multiply factorial by i
        }
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
