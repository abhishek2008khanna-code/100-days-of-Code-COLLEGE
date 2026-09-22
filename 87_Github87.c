// Q87- Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[200];
    int spaces = 0, digits = 0, specials = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // read string with spaces

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == ' ') {
            spaces++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
            // not alphabet, not space, not digit → special character
            specials++;
        }
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", specials);

    return 0;
}
