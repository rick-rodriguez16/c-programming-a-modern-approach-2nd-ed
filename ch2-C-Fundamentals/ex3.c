// Volume of Spheres
// This modified version takes user input to calculate the volume

#include <stdio.h>

#define PI 3.1415926

int main(void) {
    
    double radius = 0;
    printf("Enter the radius of a sphere to find its volume: ");
    if (scanf("%lf", &radius) == 1) {
        double volumeOfSphere = 4.0f/3.0f * PI * radius * radius * radius;
        printf("A sphere of radius %f has a volume of approximately %f cubic units.\n", radius, volumeOfSphere);
    }
    else {
        printf("Error. Failed to read input.\n");
    }

    return 0;
}

