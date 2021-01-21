/*
 * Prompt user for the radius of a circle and compute its area and circumference
 * (CircleComputation.c)
 */
#include <stdio.h>

int main() {
    double radius, circumference, area; // Declare 3 floating-point variables
    double pi = 3.14159265;             // Declare and define PI

    // %lf stands for long float, aka double
    printf("Enter the radius: ");  // Prompting message
    scanf("%lf", &radius);         // Read input into variable radius

    // Compute area and circumference
    area = radius * radius * pi;
    circumference = 2.0 * radius * pi;

    // Print the results
    printf("The radius is %lf.\n", radius);
    printf("The area is %lf.\n", area);
    printf("The circumference is %lf.\n", circumference);

    return 0;
}