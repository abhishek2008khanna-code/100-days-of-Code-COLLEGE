// Q90- Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Toggle case
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // convert to lowercase
        }
    }

    printf("Toggled string: %s\n", str);

    return 0;
}
