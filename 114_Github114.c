/*
Q114- rite a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int maxLen = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int visited[256] = {0};
        int len = 0;

        for (int j = i; s[j] != '\0'; j++) {
            if (visited[s[j]]) {
                break;
            }
            visited[s[j]] = 1;
            len++;
        }

        if (len > maxLen) {
            maxLen = len;
        }
    }

    printf("%d", maxLen);

    return 0;
}