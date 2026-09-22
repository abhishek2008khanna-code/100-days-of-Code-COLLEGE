// Q88- Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // read string with spaces

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';  // replace space with hyphen
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}
