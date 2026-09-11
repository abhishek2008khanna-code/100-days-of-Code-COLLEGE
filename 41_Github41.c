// Q41- Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find number of digits
    digits = (int)log10(num) + 1;

    // Extract first and last digit
    firstDigit = num / (int)pow(10, digits - 1);
    lastDigit = num % 10;

    // Remove first digit and last digit from number
    int middle = num % (int)pow(10, digits - 1);  // remove first digit
    middle = middle / 10;                         // remove last digit

    // Construct swapped number
    swappedNum = lastDigit * (int)pow(10, digits - 1) + middle * 10 + firstDigit;

    // Output
    printf("Number after swapping first and last digit = %d\n", swappedNum);

    return 0;
}
