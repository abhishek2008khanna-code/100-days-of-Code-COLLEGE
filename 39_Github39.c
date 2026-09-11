// Q39- Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main(){
    int num, digit;
    int product = 1; // Starts with 1 ( neutral for multiplication)
    int hasOdd = 0; // Flag to check if odd digit exist

    // Input
    printf("Enter the number: ");
    scanf("%d", &num);

    // Process each digit

    while(num!=0){
        digit = num % 10;   // extract least digit
        if(digit % 2 != 0){  // Check for odd numbers
            product = product * digit;
            hasOdd = 1;  // Mark that we found an odd digit
        }
        num = num / 10;
    }
    if (hasOdd){
        printf("Product of odd Digits = %d\n", product);
    }
    else{
        printf("No odd digits found.\n");
    }



    return 0;
}