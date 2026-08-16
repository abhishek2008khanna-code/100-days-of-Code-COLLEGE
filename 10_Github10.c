// Q10- Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
#include <math.h>

int main(){
    int seconds, minutes, hours, remainingSeconds;
    printf("Enter the time (in seconds): ");
    scanf("%d", &seconds);

    //Calculation 

    hours = seconds / 3600;            // 1 hour = 3600 seconds
    minutes = (seconds % 3600) / 60;   // Remaining minutes
    remainingSeconds = seconds % 60;   // Remaining seconds

    printf("The time in standard format is: %d:%d:%d\n", hours, minutes, remainingSeconds);

    return 0;
}