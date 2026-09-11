// Q40- Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
# include <string.h>

int main(){
    char binary[100];
    int i;

    // Input 
    printf("Enter a binary number: ");
    scanf("%s", binary);
    // process each character 
    for (i=0; i< strlen(binary); i++){
        if(binary[i] == '0'){
            binary[i] = '1';
        }
        else if (binary[i] == '1'){
            binary[i] = '0';
        }
    else{
        printf("Invalid input! i, only 0s and 1s allowed.\n");
    }
}

// Output
printf("1's Complement = %s\n", binary);
return 0;
}