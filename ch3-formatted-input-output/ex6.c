// fraction addition

#include <stdio.h>
#include <stdlib.h>

#define EXPECTED_FIELDS 4

int main(void) {

    int frac1_numer = -1;
    int frac1_denom = -1;
    int frac2_numer = -1;
    int frac2_denom = -1;

    printf("Enter two fractions sepratated by a plus sign (example: a/b+x/y): ");
    fflush(stdout);

    int user_input_fields = scanf("%d/%d+%d/%d", &frac1_numer, &frac1_denom, &frac2_numer, &frac2_denom);
    if (user_input_fields != EXPECTED_FIELDS) {
        puts("Error. Expression entered incorrectly.");
        int clearing_buffer;
        while((clearing_buffer = getchar()) != '\n' && clearing_buffer != EOF) {};
        return EXIT_FAILURE;
    }

    if (frac1_denom == 0 || frac2_denom == 0) {
        puts("Error. A denominator cannot be zero.");
        return EXIT_FAILURE;
    }

    int numerator_sum = (frac1_numer * frac2_denom) + (frac2_numer * frac1_denom);
    int common_denom = frac1_denom * frac2_denom;

    printf("The sum is %d/%d\n", numerator_sum, common_denom);

    return 0;
}
