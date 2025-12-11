// Date Converter
// Converts mm/dd/yyyy
// to yyyymmdd

#include <stdio.h>

#define CORRECT_DATE_INPUT 3

int main(void) {

    int month = 0;
    int day = 0;
    int year = 0;
    
    printf("Enter a date (mm/dd/yyyy): ");
    fflush(stdout);
    
    if (scanf("%d/%d/%d", &month, &day, &year) == CORRECT_DATE_INPUT) {
        printf("You entered the date %d%2.2d%2.2d\n", year, month, day);
    }
    else {
        printf("Error. Invalid input.\n");
    }

    return 0;
}

