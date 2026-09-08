// Q33- Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main(){
    int num, copy, remainder, digits = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    copy = num;

    // Count digits
    while ( copy > 0){
        digits++;
        copy /= 10;
    }

    copy = num;

    while ( copy > 0){
        remainder = copy % 10;
        sum += pow(remainder, digits);
        copy /= 10;
    }

    // Check Armstrong condition
    if ( sum == num){
        printf("%d is an armstroong number.\n", num);
    }
    else{
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
    


