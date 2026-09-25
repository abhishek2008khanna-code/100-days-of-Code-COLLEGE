// Q94- Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[50];   // To store longest word
    char word[50];      // Temporary word
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Traverse the sentence
    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            word[j++] = sentence[i];  // Build current word
        } else {
            word[j] = '\0';  // End current word
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;  // Reset for next word
        }
        i++;
    }

    // Final check for last word
    word[j] = '\0';
    if (strlen(word) > maxLen) {
        strcpy(longest, word);
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
