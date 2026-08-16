// Q3- Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main(){
    int length, breadth, area, perimeter;
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the breadth: ");
    scanf("%d", &breadth);

    // Calculation,

    perimeter = 2*(length+breadth);
    area = length*breadth;

    printf("The perimeter of a rectangle is %d\n", perimeter);
    printf("The area of a rectangle is %d\n", area);
    
    return 0;
}




