// number reversal

#include <stdio.h>
#include <stdlib.h>

#define EXPECTED_FIELDS 1

int main(void) {
    
    int value = -1;

    printf("Enter a two-digit number: ");
    fflush(stdout);
    int user_input_field = scanf("%d", &value);

    if (user_input_field != EXPECTED_FIELDS) {
        puts("Error inputting value.");
        return EXIT_FAILURE;
    }

    if (value < 10 || value > 99) {
        puts("Error. Two-digit number is required.");
        return EXIT_FAILURE;
    }

    int tens_digit = value / 10;
    int ones_digit = value % 10;

    printf("The reversal is: %d%d\n", ones_digit, tens_digit);

    return 0;
}

