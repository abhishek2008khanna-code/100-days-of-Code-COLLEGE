// Q34- Write a program to check if a number is prime.

#include <stdio.h>

int main(){
    int num, i, count = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if(num%i==0){
            count++;
        }
        
    }
    if ( count==2){
        printf("%d is a Prime Number.\n", num);
    }
    else{
        printf("%d is not a Prime Number.\n", num);
    }

    return 0;
}