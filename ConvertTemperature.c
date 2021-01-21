/*
 * Convert temperature between Celsius and Fahrenheit
 * (ConvertTemperature.c)
 */
#include <stdio.h>

// you can express floating-point numbers in fixed notation (1.23, -45, etc),
// or scientific notation (1.2e3, -4E5.6, etc), where e or E denote the exponent of base 10.
int main() {
    double celsius, fahrenheit;

    printf("Enter the temperature in celsius: ");
    scanf("%lf", &celsius);  // Use %lf to read an double
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    printf("%.2lf degree C is %.2lf degree F.\n\n", celsius, fahrenheit);
    // %.2lf prints a double with 2 decimal places

    printf("Enter the temperature in fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius =  (fahrenheit - 32.0) * 5.0 / 9.0;
    printf("%.2lf degree F is %.2lf degree C.\n\n", fahrenheit, celsius);

    return 0;
}