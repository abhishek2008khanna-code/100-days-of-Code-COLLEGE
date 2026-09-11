// Q43- Write a program to check if a number is a strong number.

// Using FUNCTIONS

#include <stdio.h>

// Function Prototype
int factorial(int);
// Function Definition
int factorial( int n){
    int fact = 1;
    for(int i =1; i <= n; i++){
        fact = fact*i;
    }
    return fact;
} 

int main(){
    int num, temp, digit;
    int sum = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    temp = num; // store original number

    // process each digit

    while(temp!=0){
        digit = temp % 10;
        sum = sum + factorial(digit);
        temp = temp / 10;
    }
    // Check condition 
    if(sum == num){
        printf("%d is a Strong Number\n", num);
    }
    else{
        printf("%d is NOT a Strong Number\n", num);
    }

    return 0;
}