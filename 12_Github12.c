// Q12- Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n<0){
        printf("The number %d is negative", n);
    }
    else if(n==0){
        printf("The number %d is zero", n);
    }
    else if(n>0){
        printf("The number %d is positive", n);
    }

    return 0;
}