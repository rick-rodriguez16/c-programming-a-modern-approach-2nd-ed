// 3-digit number reversal

#include <stdio.h>
#include <stdlib.h>

#define EXPECTED_FIELDS 1

int main(void) {
    
    int value = -1;

    printf("Enter a three-digit number: ");
    fflush(stdout);
    int user_input_field = scanf("%d", &value);

    if (user_input_field != EXPECTED_FIELDS) {
        puts("Error inputting value.");
        int clearing_buffer;
        while((clearing_buffer = getchar()) != '\n' && clearing_buffer != EOF) {}
        return EXIT_FAILURE;
    }

    if (value < 100 || value > 999) {
        puts("Error. Three-digit number is required.");
        return EXIT_FAILURE;
    }

    int hundreds_digit = value / 100;
    int tens_digit = value / 10 - hundreds_digit * 10;
    int ones_digit = value % 10;

    printf("The reversal is: %d%d%d\n", ones_digit, tens_digit, hundreds_digit);

    return 0;
}

