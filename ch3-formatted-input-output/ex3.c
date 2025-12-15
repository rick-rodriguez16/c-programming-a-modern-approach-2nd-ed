// 13-digit ISBN breakdown

#include <stdio.h>
#include <stdlib.h>

#define EXPECTED_ISBN_FIELDS 5

int main(void) {
    
    int gsi_prefix = -1;
    int group_identifier = -1;
    int publishers_code = -1;
    int item_number = -1;
    int check_digit = -1;

    printf("Enter 13-digit ISBN (including dashes \"-\"): ");
    fflush(stdout);
    
    int isbn_groups = (scanf("%d-%d-%d-%d-%d", &gsi_prefix, &group_identifier, &publishers_code, &item_number, &check_digit));

    if (isbn_groups != EXPECTED_ISBN_FIELDS) {
        printf("Error. Invalid 13-digit ISBN number.\n");
        int clearing_buffer;
        while((clearing_buffer = getchar()) != '\n' && clearing_buffer != EOF) {};
        return EXIT_FAILURE;
    }

    printf("GS1 prefix: %d\n", gsi_prefix);
    printf("Group Identifier: %d\n", group_identifier);
    printf("Publishers Code: %d\n", publishers_code);
    printf("Item Number: %d\n", item_number);
    printf("Check Digit: %d\n", check_digit);

    return 0;
}
