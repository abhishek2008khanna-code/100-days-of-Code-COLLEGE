// Q136- Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

// Define enum for menu choices
enum Operation
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int num1, num2, choice;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    printf("\nMenu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case ADD:
            printf("Result = %d\n", num1 + num2);
            break;

        case SUBTRACT:
            printf("Result = %d\n", num1 - num2);
            break;

        case MULTIPLY:
            printf("Result = %d\n", num1 * num2);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}