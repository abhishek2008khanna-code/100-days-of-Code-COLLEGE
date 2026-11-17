// Q146- Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>
struct date{
    int day;
    int month;
    int year;
};
struct employee{
    char name[50];
    float salary;
    struct date joiningDate;
};
int main(){
    struct employee e;
    
    printf("Enter employee name: ");
    scanf(" %[^\n]", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("Enter Joining Date: ");
    scanf("%d %d %d", &e.joiningDate.day, &e.joiningDate.month, &e.joiningDate.year);

    printf("\nEmployee Details\n");
    printf("Name:%s\n", e.name);
    printf("Salary:%.2f\n", e.salary);
    printf("Joining Date:%02d/%02d/%04d\n", e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);
    return 0;
}