// Q4- Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main(){
    int radius, area, circumference;
    printf("Enter the radius: ");
    scanf("%d", &radius);

    // Calculation,

    circumference = 2*3.14*radius;
    area = 3.14*radius*radius;

    printf("The circumference of the circle is %d\n", circumference);
    printf("The area of the circle is %d\n", area);
    
    return 0;
}

