// Q130- Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

int main()
{
    FILE *fp;
    int n, i;
    char name[50];
    int roll;
    float marks;

    /* Writing records to file */
    fp = fopen("students.txt", "w");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", name);

        printf("Enter Roll Number: ");
        scanf("%d", &roll);

        printf("Enter Marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    /* Reading records from file */
    fp = fopen("students.txt", "r");

    printf("\n\nStudent Records:\n");
    printf("-------------------------\n");

    while(fscanf(fp, "%s %d %f", name, &roll, &marks) != EOF)
    {
        printf("Name: %s\n", name);
        printf("Roll No: %d\n", roll);
        printf("Marks: %.2f\n\n", marks);
    }

    fclose(fp);

    return 0;
}