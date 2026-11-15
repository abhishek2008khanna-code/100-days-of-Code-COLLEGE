// Q145- Return a structure containing top student's details from a function.

#include <stdio.h>

struct student
{
    char name[50];
    int roll_no;
    float marks;
};

struct student getTopStudent(struct student s[], int n)
{
    int i, max = 0;

    for(i = 1; i < n; i++)
    {
        if(s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    return s[max];
}

int main()
{
    struct student s[5], topper;
    int i, j;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        /* Remove newline character */
        for(j = 0; s[i].name[j] != '\0'; j++)
        {
            if(s[i].name[j] == '\n')
            {
                s[i].name[j] = '\0';
                break;
            }
        }

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        getchar();  /* Consume leftover newline */
    }

    topper = getTopStudent(s, 5);

    printf("\nTop Student Details:\n");
    printf("Name     : %s\n", topper.name);
    printf("Roll No  : %d\n", topper.roll_no);
    printf("Marks    : %.2f\n", topper.marks);

    return 0;
}