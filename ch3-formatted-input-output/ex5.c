// magic square
// user enter number 1 through 16 in any order
// then displays the order in a 4 by 4 square
// and adds the rows columns and diagonals to get their sums
// If the sums are all the same, then its a magic square

#include <stdio.h>
#include <stdlib.h>

#define MAGIC_TOTAL 136
#define TOTAL_INPUTS 16
#define MAGIC_NUMBER 34

int main(void) {
    puts("Magic Square\n");

    int row1col1 = -1;
    int row1col2 = -1;
    int row1col3 = -1;
    int row1col4 = -1;
    
    int row2col1 = -1;
    int row2col2 = -1;
    int row2col3 = -1;
    int row2col4 = -1;
    
    int row3col1 = -1;
    int row3col2 = -1;
    int row3col3 = -1;
    int row3col4 = -1;
    
    int row4col1 = -1;
    int row4col2 = -1;
    int row4col3 = -1;
    int row4col4 = -1;

    printf("Enter the numbers from 1 through 16 once in any order:\n");
    fflush(stdout);
    
    int user_inputs = scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
                            &row1col1, &row1col2, &row1col3, &row1col4, 
                            &row2col1, &row2col2, &row2col3, &row2col4, 
                            &row3col1, &row3col2, &row3col3, &row3col4, 
                            &row4col1, &row4col2, &row4col3, &row4col4);

    // check that the number of inputs is valid
    if (user_inputs != TOTAL_INPUTS) {
        puts("Error. Incorrect number of inputs.");
        int clearing_buffer;
        while((clearing_buffer = getchar()) != '\n' && clearing_buffer != EOF) {};
        return EXIT_FAILURE;
    }

    // check that each input is within range (between 1 to 16)
    if (row1col1 < 1 || row1col1 > 16 || row1col2 < 1 || row1col2 > 16 ||
        row1col3 < 1 || row1col3 > 16 || row1col4 < 1 || row1col4 > 16 ||
        row2col1 < 1 || row2col1 > 16 || row2col2 < 1 || row2col2 > 16 ||
        row2col3 < 1 || row2col3 > 16 || row2col4 < 1 || row2col4 > 16 ||
        row3col1 < 1 || row3col1 > 16 || row3col2 < 1 || row3col2 > 16 ||
        row3col3 < 1 || row3col3 > 16 || row3col4 < 1 || row3col4 > 16 ||
        row4col1 < 1 || row4col1 > 16 || row4col2 < 1 || row4col2 > 16 ||
        row4col3 < 1 || row4col3 > 16 || row4col4 < 1 || row4col4 > 16) {
        
        puts("Error. One or more values are out of range (must be 1-16).");
        return EXIT_FAILURE;
    }
    
    // check that no inputs are repeated
    int input_sum = row1col1 + row1col2 + row1col3 + row1col4 +
                    row2col1 + row2col2 + row2col3 + row2col4 +
                    row3col1 + row3col2 + row3col3 + row3col4 +
                    row4col1 + row4col2 + row4col3 + row4col4;

    if (input_sum != MAGIC_TOTAL) {
        puts("Error. Cannot repeat numbers while inputting.");
        return EXIT_FAILURE;
    }    

    // output
    printf("\n\t%2d %2d %2d %2d\n", row1col1, row1col2, row1col3, row1col4);
    printf("\t%2d %2d %2d %2d\n", row2col1, row2col2, row2col3, row2col4);
    printf("\t%2d %2d %2d %2d\n", row3col1, row3col2, row3col3, row3col4);
    printf("\t%2d %2d %2d %2d\n\n", row4col1, row4col2, row4col3, row4col4);

    int row1_sum = row1col1 + row1col2 + row1col3 + row1col4;
    int row2_sum = row2col1 + row2col2 + row2col3 + row2col4;
    int row3_sum = row3col1 + row3col2 + row3col3 + row3col4;
    int row4_sum = row4col1 + row4col2 + row4col3 + row4col4;

    int col1_sum = row1col1 + row2col1 + row3col1 + row4col1;
    int col2_sum = row1col2 + row2col2 + row3col2 + row4col2;
    int col3_sum = row1col3 + row2col3 + row3col3 + row4col3;
    int col4_sum = row1col4 + row2col4 + row3col4 + row4col4;

    int diagonal1_sum = row1col1 + row2col2 + row3col3 + row4col4;
    int diagonal2_sum = row1col4 + row2col3 + row3col2 + row4col1;

    printf("     Row sums: %d %d %d %d\n", row1_sum, row2_sum, row3_sum, row4_sum);
    printf("  Column sums: %d %d %d %d\n", col1_sum, col2_sum, col3_sum, col4_sum);
    printf("Diagonal sums: %d %d\n", diagonal1_sum, diagonal2_sum);

    // check if it is a magic square
    if (row1_sum == MAGIC_NUMBER && row2_sum == MAGIC_NUMBER && 
        row3_sum == MAGIC_NUMBER && row4_sum == MAGIC_NUMBER &&
        col1_sum == MAGIC_NUMBER && col2_sum == MAGIC_NUMBER &&
        col3_sum == MAGIC_NUMBER && col4_sum == MAGIC_NUMBER &&
        diagonal1_sum == MAGIC_NUMBER && diagonal2_sum == MAGIC_NUMBER) {
        
        puts("Yours is a Magic Square!");
    }

    return 0;
}

