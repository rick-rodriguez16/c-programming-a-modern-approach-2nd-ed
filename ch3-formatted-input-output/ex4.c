// Phone number converter
// from (xxx) xxx-xxxx to xxx.xxx.xxxx

#include <stdio.h>
#include <stdlib.h>

#define PARTS_OF_PHONE_NUMBER 3

int main(void) {
    
    puts("\tUS Phone number converter");
    puts("Converts from (xxx) xxx-xxxx to xxx.xxx.xxxx");
    puts("============================================\n");
    
    int area_code = -1;
    int telephone_prefix = -1;
    int line_number = -1;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    fflush(stdout);
    int phone_number_parts = scanf("(%d) %d-%d", &area_code, &telephone_prefix, &line_number);

    if (phone_number_parts != PARTS_OF_PHONE_NUMBER) {
        puts("Error. Incorrect number of phone number parts.");
        int clearing_buffer;
        while ((clearing_buffer = getchar()) != '\n' && clearing_buffer != EOF) {};
        return EXIT_FAILURE;
    }

    if (area_code < 200 || area_code > 999) {
        puts("Error. Invalid area code.");
        return EXIT_FAILURE;
    }

    if (telephone_prefix < 200 || telephone_prefix > 999) {
        puts("Error. Invalid telephone prefix.");
        return EXIT_FAILURE;
    }
    
    if (line_number < 0 || line_number > 9999) {
        puts("Error. Invalid line number.");
        return EXIT_FAILURE;
    }

    printf("You entered: %d.%d.%04d\n", area_code, telephone_prefix, line_number);
    return 0;
}

