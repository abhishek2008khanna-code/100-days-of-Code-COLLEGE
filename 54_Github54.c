/*
Q54- Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

   */

   #include <stdio.h>

int main() {
    int i, j;
    int n = 4; // height of the upper half (excluding middle row)

    // Upper half (including middle row)
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (i = n-1; i >= 1; i--) {
        // Print spaces
        for (j = n; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
