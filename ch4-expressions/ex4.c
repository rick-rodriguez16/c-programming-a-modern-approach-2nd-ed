// Number to Octal converter

#include <stdio.h>
#include <stdlib.h>

#define EXPECTED_FIELDS 1

void integer_to_octal_converter(int number);

int main(void) {
    
    puts("Number to Octal Converter");
    puts("=========================\n");

    int number = -1;

    printf("Enter a number between 0 and 32767: ");
    fflush(stdout);
    int user_fields = scanf("%d", &number);

    if (user_fields != EXPECTED_FIELDS) {
        puts("Error. Invalid input.");
        int clearing_buffer;
        while ((clearing_buffer = getchar()) != '\n' && clearing_buffer != EOF) {}
        return EXIT_FAILURE;
    }

    if (number < 0 || number > 32767) {
        puts("Error. Number out of range.");
        return EXIT_FAILURE;
    }

    integer_to_octal_converter(number);

    return 0;
}

void integer_to_octal_converter(int number) {
    
    int oct_digit1 = -1;
    int oct_digit2 = -1; 
    int oct_digit3 = -1;
    int oct_digit4 = -1;
    int oct_digit5 = -1;

    int remainder = -1;

    oct_digit5 = number % 8;
    remainder = number / 8;
    
    oct_digit4 = remainder % 8;
    remainder = remainder / 8;
    
    oct_digit3 = remainder % 8;
    remainder = remainder / 8;
    
    oct_digit2 = remainder % 8;
    remainder = remainder / 8;
    
    oct_digit1 = remainder % 8;
    remainder = remainder / 8;

    printf("In octal, your number is %d%d%d%d%d\n", oct_digit1, oct_digit2, oct_digit3, oct_digit4, oct_digit5);

}
