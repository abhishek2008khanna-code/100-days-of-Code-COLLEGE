// Q138- Print all enum names and integer values using a loop.

#include <stdio.h>

enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    char *dayNames[] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"
    };

    int i;

    printf("Day\t\tValue\n");
    for (i = 0; i <= SATURDAY; i++) {
        printf("%-10s\t%d\n", dayNames[i], i);
    }

    return 0;
}