// Q91- Remove all vowels from a string.

#include <stdio.h>

int main() {
    char str[100], result[100];
    int j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // read string with spaces

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if character is NOT a vowel
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[j++] = ch;  // copy non-vowel
        }
    }
    result[j] = '\0';  // terminate string

    printf("String without vowels: %s\n", result);

    return 0;
}
