// US Bills count
// User enters a whole dollar amount
// Output shows the smallest number of 20s, 10s, 5s and 1s

#include <stdio.h>

void calculate_bills(int value);


int main(void) {
    
    int value = 0;
    printf("Enter a whole dollar amount (no decimals): ");

    if(scanf("%d", &value) == 1) {
        calculate_bills(value);
    }
    else {
        printf("Error. Invalid input.");
    }
    return 0;
}


void calculate_bills(int value) {
    printf("$20 bills: %d\n", value / 20);
    value %= 20;
    printf("$10 bills: %d\n", value / 10);
    value %= 10;
    printf(" $5 bills: %d\n", value / 5);
    value %= 5;
    printf(" $1 bills: %d\n", value);
}

