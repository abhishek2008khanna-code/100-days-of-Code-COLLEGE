// Q30- Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to reverse the number
    while (num != 0) {
        remainder = num % 10;              // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num = num / 10;                    // remove last digit
    }

    // Output
    printf("Reversed number = %d\n", reversed);

    return 0;
}
