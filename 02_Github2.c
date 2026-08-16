// Q2- Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
    int a, b, sum, difference, product, quotient;
    printf("Enter the number a: ");
    scanf("%d", &a);
    printf("Enter the number b: ");
    scanf("%d", &b);

    // Calculation

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;

    printf("The sum of two number is %d\n", sum);
    printf("The difference of two number is %d\n", difference);
    printf("The product of two number is %d\n", product);
    printf("The quotient of two number is %d\n", quotient);

    return 0;
}