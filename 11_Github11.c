// Q11- Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main(){
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);

    if(i % 2 == 0){
        printf("The number %d is Even", i);
    }
    else{
        printf("The number %d is Odd", i);
    }

    return 0;
}