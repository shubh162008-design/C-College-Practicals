// Aim: Write a C program that takes temperature in Celsius from the user and converts it to Fahrenheit using a formula.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Take input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Print result
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
