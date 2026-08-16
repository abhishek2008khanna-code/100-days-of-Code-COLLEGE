// Q13- Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if( year % 400 == 0 ){
        printf("The year %d is a LEAP YEAR\n", year);
    }
    else if ( year % 100 == 0 ){
        printf("The year %d is NOT a LEAP YEAR\n", year);
    }
    else if ( year % 4 == 0 ){
        printf("The year %d is a LEAP YEAR\n", year);
    }
    else{
        printf("The year %d is NOT a LEAP YEAR\n", year);
    }
    return 0;
}
    
