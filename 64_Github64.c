// Q64- Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}; // frequency array for digits 0–9
    int digit, maxDigit, maxFreq = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;   // extract last digit
        freq[digit]++;      // increment frequency
        num /= 10;          // remove last digit
    }

    // Find digit with maximum frequency
    for (digit = 0; digit < 10; digit++) {
        if (freq[digit] > maxFreq) {
            maxFreq = freq[digit];
            maxDigit = digit;
        }
    }

    printf("Digit %d occurs the most times (%d times).\n", maxDigit, maxFreq);

    return 0;
}
