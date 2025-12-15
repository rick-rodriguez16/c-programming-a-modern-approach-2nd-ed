// Formatting Product Information
// from a user

#include <stdio.h>
#include <stdlib.h>

#define EXPECTED_ITEM_NUMBER_FIELD 1
#define EXPECTED_UNIT_PRICE_FIELD 1
#define EXPECTED_DATE_FIELDS 3

#define MIN_MONTH 1
#define MAX_MONTH 12
#define MIN_DAY 1
#define MAX_DAY 31

int main(void) {

    int item_number = -1;
    double unit_price = -1;
    int month = -1;
    int day = -1;
    int year = -1;

    printf("Enter item number: ");
    fflush(stdout);
    int item_number_field = scanf("%d", &item_number);
    if (item_number_field != EXPECTED_ITEM_NUMBER_FIELD) {
        printf("Error. Invalid item number input.\n");
        return EXIT_FAILURE;
    }

    printf("Enter unit price: ");
    fflush(stdout);
    int unit_price_field = scanf("%lf", &unit_price);
    if (unit_price_field != EXPECTED_UNIT_PRICE_FIELD) {
        printf("Error. Invalid unit price input.\n");
        return EXIT_FAILURE;
    }

    printf("Enter purchase date (mm/dd/yyyy): ");
    fflush(stdout);
    int date_input_fields = scanf("%d/%d/%d", &month, &day, &year);
    if (date_input_fields != EXPECTED_DATE_FIELDS) {
        printf("Error. Invalid date input.\n");
        return EXIT_FAILURE;
    }
    
    if ((month < MIN_MONTH || month > MAX_MONTH) ||
        (day < MIN_DAY || day > MAX_DAY) ||
        (year < 0)) {
        
        printf("Error. Invalid date inputs.\n");
        return EXIT_FAILURE;
    }

    printf("\nItem\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2lf\t%02d/%02d/%04d\n\n", item_number, unit_price, month, day, year);

    return 0;
}

