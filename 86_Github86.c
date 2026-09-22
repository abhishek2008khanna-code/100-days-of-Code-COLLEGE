// Q86- Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // read string with spaces

    // Find length manually
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    // Compare characters from start and end
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;  // not palindrome
            break;
        }
    }

    if (flag)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is NOT a Palindrome.\n");

    return 0;
}
