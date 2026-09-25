// Q95- Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[]) {
    // If lengths differ, not possible
    if (strlen(str1) != strlen(str2))
        return 0;

    // Create a new string by concatenating str1 with itself
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (isRotation(str1, str2))
        printf("The strings are rotations of each other.\n");
    else
        printf("The strings are NOT rotations of each other.\n");

    return 0;
}
