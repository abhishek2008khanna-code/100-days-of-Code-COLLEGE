// Q93- Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 256  // For all ASCII characters

int areAnagrams(char str1[], char str2[]) {
    int count[SIZE] = {0};  // Array to store frequency of characters
    int i;

    // If lengths differ, they can't be anagrams
    if (strlen(str1) != strlen(str2))
        return 0;

    // Count frequency of characters in str1
    for (i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)tolower(str1[i])]++;  
    }

    // Subtract frequency using str2
    for (i = 0; str2[i] != '\0'; i++) {
        count[(unsigned char)tolower(str2[i])]--;  
    }

    // If all counts are zero, they are anagrams
    for (i = 0; i < SIZE; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}