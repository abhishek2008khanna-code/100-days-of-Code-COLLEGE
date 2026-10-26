// Q124- Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main()
{
    char source[50], destination[50];
    FILE *fp1, *fp2;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", destination);

    fp1 = fopen(source, "r");

    if (fp1 == NULL)
    {
        printf("Source file does not exist.\n");
        return 1;
    }

    fp2 = fopen(destination, "w");

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    printf("File copied successfully.\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
