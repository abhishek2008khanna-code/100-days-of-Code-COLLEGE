// Q38- Write a program to find the sum of digits of a number.

#include <stdio.h>

int main(){
    int number = 0;
    int digit = 0;
    int sum = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    while(number!=0){
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    printf("Sum = %d", sum);


    return 0;
}