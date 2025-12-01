// Total with Tax
// User enters an amount
// Output show amount with 5% tax added

#include <stdio.h>

#define TAX 0.05

int main(void) {
    
    double amount = 0;
    printf("Enter an amount: $");

    if (scanf("%lf", &amount) == 1) {
        double amount_with_tax = (amount * TAX) + amount;
        printf("With %.0lf percent tax added:  $%.2lf\n", TAX * 100, amount_with_tax);
    }
    else {
        printf("Error. Invalid input");
    }

    return 0;
}

