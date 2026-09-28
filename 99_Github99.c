// Q99- Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    int day, month, year;
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun",
                      "Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%d/%d/%d", &day, &month, &year);

    // Print in desired format
    printf("%02d-%s-%04d\n", day, months[month-1], year);

    return 0;
}
