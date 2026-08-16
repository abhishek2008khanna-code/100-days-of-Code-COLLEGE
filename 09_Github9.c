// Q9- Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include<math.h>

int main(){
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    // Input values
    printf("Enter the Principal amount: ");
    scanf("%f", &principal);
   
    printf("Enter the Rate of Interest (per year in %%): ");
    scanf("%f", &rate);
    
    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Claculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interst
    compoundInterest = principal * (pow((1 + rate / 100), time)) - principal;

    // Output results
    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nCompound Interest = %.2f\n", compoundInterest);

    return 0;
}