// Problem value
// User enters a value for x
// Outputs a result using the expression ((((3x + 2)x - 5)x - 1)x + 7)x - 6

#include <stdio.h>

int main(void) {
    
    printf("((((3x + 2)x - 5)x - 1)x + 7)x - 6 Problem Solver\n");
    printf("---------------------------------------------------\n\n");
    printf("Enter a whole number value for x: ");
    fflush(stdout);
    // yes I know you can use any real number.  Let's keep it simple folks.

    int base = 0;
    if (scanf("%d", &base) == 1) {
        int result = ((((3 * base + 2) * base - 5) * base - 1) * base + 7) * base - 6;
        printf("((((3 * %d + 2) * %d - 5) * %d - 1) * %d + 7) * %d - 6 = %d\n", base, base, base, base, base, result);
    }
    else {
        printf("Error. Invalid input.");
    }

    return 0;
}

