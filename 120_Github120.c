// Q120- Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert first character to uppercase
    str[0] = toupper(str[0]);

    // Convert remaining characters to lowercase
    for(int i = 1; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Sentence Case: %s", str);

    return 0;
}
