// Q45- Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

// S = 2/3 + ...... + i+2/i+4

#include <stdio.h>

int main(){
    int n;
    float sum = 0.0;

    printf("Enter till how you want to find the sum of the series: ");
    scanf("%d", &n);

    // Calculation 

    for (int i = 1; i <= n; i++)
    {
        int numerator = i+2;
        int denominator = (2*i + 1);
        sum = sum + (float)numerator/denominator;

    }
    //output
    printf("The sum of n terms is %.2f\n", sum);
    
        return 0;
    }
    

    

    