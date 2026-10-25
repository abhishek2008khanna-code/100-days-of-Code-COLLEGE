// Q123- Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0, inWord = 0;

    fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("File not found!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        chars++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    fclose(fp);

    printf("Characters = %d\n", chars);
    printf("Words = %d\n", words);
    printf("Lines = %d\n", lines);

    return 0;
}
