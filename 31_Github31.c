// Q31- Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main()
{

    int num, a, remainder;
    int digits = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    a = num;

    while (a > 0)
    {
        digits++; // increases digit count
        a /= 10;  // remove last digit
    }

    a = num;

    while (a > 0)
    {
        remainder = a % 10;                 // get last digit
        sum = sum + pow(remainder, digits); // Add digit^digits
        a = a / 10;                         // remove last digit
    }

    if (sum == num)
    {
        printf("%d is an ARMSTRONG NUMBER.\n", num);
    }
    else
    {
        printf("%d is not an ARMSTRONG NUMBER.\n", num);
    }

    return 0;
}