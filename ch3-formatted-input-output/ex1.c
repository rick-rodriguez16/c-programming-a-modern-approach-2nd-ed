// Date Converter
// Converts mm/dd/yyyy
// to yyyymmdd

#include <stdio.h>
#include <stdlib.h>

#define MIN_MONTH 1
#define MAX_MONTH 12
#define MIN_DAY 1
#define MAX_DAY 31
#define EXPECTED_DATE_FIELDS 3

int main(void) {

    int month = -1;
    int day = -1;
    int year = -1;
    
    printf("Enter a date (mm/dd/yyyy): ");
    fflush(stdout);
    
    int date = scanf("%d/%d/%d", &month, &day, &year);

    if (date != EXPECTED_DATE_FIELDS) {
        printf("Error. Invalid input.\n");
        return EXIT_FAILURE;
    }

    if ((month < MIN_MONTH || month > MAX_MONTH) ||
        (day < MIN_DAY || day > MAX_DAY) ||
        (year <= 0)) {
        
        printf("Error. Invalid date inputs.\n");
        return EXIT_FAILURE;
    }
    
    printf("You entered the date %04d%02d%02d\n", year, month, day);

    return 0;
}

