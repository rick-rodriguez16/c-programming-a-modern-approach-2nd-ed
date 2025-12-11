// Calculates the the remaining balance
// on a loan after the first 3 payments
// have been made

#include <stdio.h>
#include <stdlib.h>

double calculate_remaining_balance(double balance, double rate, double monthly_payment);

int main(void) {

    double loan_amount = 0.0;
    printf("Enter amount of loan: ");
    fflush(stdout);
    if (scanf("%lf", &loan_amount) != 1) {
        printf("Error entering loan amount.\n");
        return EXIT_FAILURE;
    }

    double annual_percent_rate = 0.0;
    printf("Enter the annual percent rate: ");
    fflush(stdout);
    if (scanf("%lf", &annual_percent_rate) != 1) {
        printf("Error entering annual percentage rate.\n");
        return EXIT_FAILURE;
    }

    double monthly_payment = 0.0;
    printf("Enter monthly payment: ");
    fflush(stdout);
    if (scanf("%lf", &monthly_payment) != 1) {
        printf("Error entering monthly payment.\n");
        return EXIT_FAILURE;
    }

    // calculate balance after each of the first three payments
    double balance_remaining = 0.0;
    double monthly_interest_rate = (annual_percent_rate / 100) / 12;

    balance_remaining = calculate_remaining_balance(loan_amount, monthly_interest_rate, monthly_payment);
    printf("Balance remaining after first payment:  $%.2lf\n", balance_remaining);

    balance_remaining = calculate_remaining_balance(balance_remaining, monthly_interest_rate, monthly_payment);
    printf("Balance remaining after second payment: $%.2lf\n", balance_remaining);

    balance_remaining = calculate_remaining_balance(balance_remaining, monthly_interest_rate, monthly_payment);
    printf("Balance remaining after third payment:  $%.2lf\n", balance_remaining);

    return 0;
}


double calculate_remaining_balance(double balance, double rate, double monthly_payment) {
    return (balance - monthly_payment) + balance * rate;
}



