// Q137- Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum UserRole
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum UserRole role;

    printf("Enter role (0-ADMIN, 1-USER, 2-GUEST): ");
    scanf("%d", (int *)&role);

    switch(role)
    {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You can view public content only.\n");
            break;

        default:
            printf("Invalid role!\n");
    }

    return 0;
}