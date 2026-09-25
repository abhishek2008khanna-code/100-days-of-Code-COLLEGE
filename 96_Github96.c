// Q96- Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Traverse the sentence
    while (sentence[i] != '\0') {
        if (sentence[i] == ' ' || sentence[i] == '\n') {
            // Reverse the current word
            reverseWord(sentence, start, i - 1);
            start = i + 1;  // Move to next word
        }
        i++;
    }

    // Reverse the last word (if not followed by space)
    reverseWord(sentence, start, i - 1);

    printf("Reversed words sentence: %s\n", sentence);

    return 0;
}
