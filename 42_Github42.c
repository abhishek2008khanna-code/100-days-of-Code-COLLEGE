// Q42- Write a program to check if a number is a perfect number.

#include <stdio.h>

int main()
{
    int num, i, digit;
    int sum = 0;
    int yesPerfect = 1; // Flag to know that we got perfect number

    printf("Enter your number: ");
    scanf("%d", &num);

    // Find sum of proper divisor

    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    // Check Condition
    if (sum == num)
    {
        printf("%d is a perfect number\n", num);
    }
    else
    {
        printf("%d is not a perfect number\n", num);
    }

    return 0;
}