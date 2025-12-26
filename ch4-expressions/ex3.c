// 3-digit reversal pt2

#include <stdio.h>
#include <stdlib.h>

#define EXPECTED_FIELDS 3

int main(void) {

    puts("3-digit Number Reversal");
    puts("=======================\n");


    int first_digit = -1;
    int second_digit = -1;
    int third_digit = -1;

    printf("Enter a three-digit number: ");
    fflush(stdout);
    int user_fields = scanf("%1d%1d%1d", &first_digit, &second_digit, &third_digit);

    if (user_fields != EXPECTED_FIELDS) {
        puts("Error entering number.");
        int clearing_buffer;
        while ((clearing_buffer = getchar()) != '\n' && clearing_buffer != EOF) {}
        return EXIT_FAILURE;
    }


    printf("The reversal is: %d%d%d\n", third_digit, second_digit, first_digit);

    return 0;
}

