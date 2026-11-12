// Q142- Store details of 5 students in an array of structures and print all.

#include <stdio.h>

// Define the structure for a student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    // Declare an array of 5 Student structures
    struct Student students[5];

    // Input details for 5 students
    printf("Enter details for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNo);
        
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name); // Reads full name including spaces
        
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Print details of all 5 students
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Roll No: %d | Name: %s | Marks: %.2f\n", 
               students[i].rollNo, students[i].name, students[i].marks);
    }

    return 0;
}
