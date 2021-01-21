/*
 * Test arithmetic operations (TestArithmetics.c)
 */
#include <stdio.h>

int main() {

    int number1, number2;  // Declare 2 integer variable number1 and number2
    int sum, difference, product, quotient, remainder;  // declare 5 int variables

    // Prompt user for the two numbers
    printf("Enter two integers (separated by space): ");
    scanf("%d%d", &number1, &number2);  // Use 2 %d to read 2 integers

    // Do arithmetic Operations
    sum = number1 + number2;
    difference = number1 - number2;
    product = number1 * number2;
    quotient = number1 / number2;
    remainder = number1 % number2;

    printf("The sum, difference, product, quotient and remainder of %d and %d are %d, %d, %d, %d, %d.\n",
           number1, number2, sum, difference, product, quotient, remainder);

    // Increment and Decrement
    ++number1;    // Increment the value stored in variable number1 by 1
    // same as "number1 = number1 + 1"
    --number2;    // Decrement the value stored in variable number2 by 1
    // same as "number2 = number2 - 1"
    printf("number1 after increment is %d.\n", number1);
    printf("number2 after decrement is %d.\n", number2);

    quotient = number1 / number2;
    printf("The new quotient of %d and %d is %d.\n", number1, number2, quotient);

    return 0;
}