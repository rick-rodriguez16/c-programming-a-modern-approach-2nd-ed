// Number of digits of a User Provided Integer

#include <stdio.h>
#include <stdlib.h>

#define EXPECTED_FIELDS 1

void digit_counter(int number);

int main(void) {

    puts("How Many Digits Is Your Integer?");
    puts("===============================\n");

    int number = -1;

    printf("Enter an positive integer: ");
    fflush(stdout);
    int user_fields = scanf("%d", &number);

    if (user_fields != EXPECTED_FIELDS) {
        puts("Error inputting value.");
        int clearing_buffer;
        while ((clearing_buffer = getchar()) != '\n' && clearing_buffer != EOF) {}
        return EXIT_FAILURE;
    }

    digit_counter(number);

    return 0;
}

void digit_counter(int number) {
    
    if (number < 0) {
        puts("Error. Enter a positive integer.");
    }
    else if (number >= 0 && number <= 9) {
        printf("The number %d has 1 digit\n", number);
    }
    else if (number >= 10 && number <= 99) {
        printf("The number %d has 2 digits\n", number);
    }
    else if (number >= 100 && number <= 999) {
        printf("The number %d has 3 digits\n", number);
    }
    else if (number >= 1000) {
        printf("The number %d has 4 or more digits\n", number);
    }
}
