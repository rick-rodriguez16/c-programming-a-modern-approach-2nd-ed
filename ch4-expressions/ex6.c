// EAN Check Digit Verification

#include <stdio.h>
#include <stdlib.h>


#define EXPECTED_FIELDS 12
#define UPC_FACTOR 3

int main(void) {

    puts("EAN Check Digit Verification");
    puts("============================\n");

    int digit1 = -1;
    int digit2 = -1;
    int digit3 = -1;
    int digit4 = -1;
    int digit5 = -1;
    int digit6 = -1;
    int digit7 = -1;
    int digit8 = -1;
    int digit9 = -1;
    int digit10 = -1;
    int digit11 = -1;
    int digit12 = -1;

    printf("Enter the first 12 digits of the EAN code: ");
    fflush(stdout);
    int user_fields = scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &digit1, &digit2, &digit3, &digit4, &digit5, &digit6, &digit7, &digit8, &digit9, &digit10, &digit11, &digit12);

    if (user_fields != EXPECTED_FIELDS) {
        puts("Error entering UPC code.");
        int clearing_buffer;
        while ((clearing_buffer = getchar()) != '\n' && clearing_buffer != EOF) {}
        return EXIT_FAILURE;
    }

    int second_sum = digit1 + digit3 + digit5 + digit7 + digit9 + digit11;
    int first_sum = digit2 + digit4 + digit6 + digit8 + digit10 + digit12;
    int total = first_sum * UPC_FACTOR + second_sum;
    int result = 9 - ((total - 1) % 10);

    printf("Check digit: %d\n", result);
    
    return 0;
}

