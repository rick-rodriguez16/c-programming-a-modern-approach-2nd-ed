/*  Exercise 3
*   dweight.c
*   1. replaces variables height, width, and length with initializers
*   2. remove the weight variable, instead calculate (volume + 165) / 166 in the last printf
*/

#include <stdio.h>

int main(void) {

    int height = 8;
    int length = 12;
    int width = 10;
    int volume = height * width * length;
    // weight = (volume + 165) / 166;

    printf("Dimensions: %d units x %d units x %d units\n", length, width, height);
    printf("Volume (cu units): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", ((volume + 165) / 166));

    return 0;
}

