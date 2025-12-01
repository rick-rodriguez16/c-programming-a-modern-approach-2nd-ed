// Volume of Spheres

#include <stdio.h>

#define PI 3.1415926

int main(void) {
    
    int radius = 10;
    double volumeOfSphere = 4.0f/3.0f * PI * radius * radius * radius;

    printf("A sphere of radius %d has a volume of approximately %f cubic units.\n", radius, volumeOfSphere);

    return 0;
}

