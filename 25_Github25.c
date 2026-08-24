// Q25- Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main(){
    int num1, num2;
    char op;

    // Input

    printf("Enter the num1: ");
    scanf("%d", &num1);

    printf("Enter the num2: ");
    scanf("%d", &num2);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    // Switch-case logic

    switch(op){
        case '+':
        printf("Result = %d\n", num1 + num2);
        break;
        case '-':
        printf("Result = %d\n", num1 - num2);
        break;
        case '*':
        printf("Result = %d\n", num1 * num2);
        break;
        case '/':
        if(num2 != 0){
            printf("Result = %d\n", num1 / num2);
        }
        else{
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
        case '%':
        if (num2 != 0){
            printf("Result = %d\n", num1 % num2);
        }
        else{
            printf("Error: Modulus by zero is not allowed.\n");
        }
        break;
        default:
        printf("Invalid operator!\n");

    }

    return 0;
}