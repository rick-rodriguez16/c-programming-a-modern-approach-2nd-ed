// Polynomial value
// User enters a value for x
// Outputs a result using the expression 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

#include <stdio.h>

int main(void) {
    
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 Polynomial Solver\n");
    printf("---------------------------------------------------\n\n");
    printf("Enter a whole number value for x: ");

    // yes I know you can use any real number.  Let's keep it simple folks.

    int base = 0;
    if (scanf("%d", &base) == 1) {
        int result = 3 * base * base * base * base * base + 2 * base * base * base * base - 5 * base * base * base - base * base + 7 * base - 6;
        printf("3(%d^5) + 2(%d^4) - 5(%d^3) - (%d^2) + 7(%d) - 6 = %d\n", base, base, base, base, base, result);
    }
    else {
        printf("Error. Invalid input.");
    }

    return 0;
}

