/*
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


*/

#include <stdio.h>

int main(){
    int i, j;

    // First block ( 1 star )
    printf("*\n\n");
    // Second block (3 stars vertically)
    for ( i = 1; i <= 3; i++)
    {
        printf("*\n");
    }
    printf("\n");
    // Third block ( 5 stars vertically )
    for ( i = 1; i <= 5; i++)
    {
        printf("*\n");
    }
    printf("\n");
    // Fourth block ( 3 stars vertically )
    for ( i = 1; i <= 3; i++)
    {
        printf("*\n");
    }
    printf("\n");
    // Fifth block ( 1 star )
    printf("*\n");
    
    return 0;
}
    
