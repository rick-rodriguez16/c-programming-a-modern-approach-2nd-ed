// Date Converter
// Converts mm/dd/yyyy
// to yyyymmdd

#include <stdio.h>

int main(void) {

    int month = 0;
    int day = 0;
    int year = 0;
    printf("Enter a date (mm/dd/yyyy): ");
    fflush(stdout);
    if (scanf("%d/%d/%d", &month, &day, &year) != 3) {
        printf("Error. Invalid input.\n");
    }

    printf("You entered the date %d%2.2d%2.2d\n", year, month, day);
    return 0;
}

