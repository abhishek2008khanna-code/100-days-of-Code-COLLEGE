// Q1- Write a program to input two numbers and display their sum.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the number a: ");
    scanf("%d", &a);
    printf("Enter the number b: ");
    scanf("%d", &b);

    // Calculation

    c = a + b;

    printf("The sum of the two number is %d", c);

    return 0;
}