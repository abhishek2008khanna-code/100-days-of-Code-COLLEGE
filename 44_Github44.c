// Q44- Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main(){
    int n;
    float sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    // Calculate Series sum

    for ( int i = 1; i <= n; i++)
    {
        int numerator = 2 * i - 1; // Odd numbers: 1, 3, 5, 7.....
        int denominator = 2 * i;  // Even numbers: 2, 4, 6, 8.....
        sum = sum + (float)numerator / denominator;
    }

    // Output
    printf("Sum of the series upt to %d terms = %.4f\n", n, sum);
    

    return 0;
}