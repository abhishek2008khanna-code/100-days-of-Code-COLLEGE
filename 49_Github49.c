/*
Q49- Write a program to print the following pattern:
5
45
345
2345
12345
*/

#include <stdio.h>

int main(){
    int i, j;
    for ( i = 5; i >= 1; i--)  // For rows 
    {
       for ( j = i; j <= 5; j++)  // For coulumns
       {
        printf("%d", j);
       }
       printf("\n");   // to move in next line
    }
    return 0;
}

       
    
