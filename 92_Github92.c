// Q92- Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};  // frequency array for 'a' to 'z'

    printf("Enter a string: ");
    scanf("%s", str);  // reads string without spaces

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Only check lowercase alphabets
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            freq[index]++;

            if (freq[index] == 2) {  // found repeating
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
