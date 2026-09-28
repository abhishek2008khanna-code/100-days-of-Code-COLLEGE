// Q98- Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);

    // Remove newline if present
    if (name[len-1] == '\n') {
        name[len-1] = '\0';
        len--;
    }

    // Print first initial
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Loop through to find spaces
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            // If this is the last word (surname), print it fully
            if (strchr(name + i + 1, ' ') == NULL) {
                printf(" %s", name + i + 1);
                break;
            } else {
                // Otherwise, just print the initial
                printf("%c", name[i+1]);
            }
        }
    }

    return 0;
}
