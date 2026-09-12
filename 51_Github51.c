/*
Q51- Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/ 

#include <stdio.h>

int main(){
    int i, j;

    // For rows
    for ( i = 5; i >= 1; i--)
    {
        for ( j = 5; j > i; j--)
        {
            printf(" ");
        }
        for ( j = i; j <= 5 ; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    

    return 0;
}