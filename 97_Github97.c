// Q97- Print the initials of a name.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character (first initial)
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Loop through the string to find spaces and print the next character
    for (int i = 0; i < strlen(name); i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            printf("%c", name[i+1]);
        }
    }

    return 0;
}
