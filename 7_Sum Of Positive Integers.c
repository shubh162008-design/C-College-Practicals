// Aim: Calculate the sum of digits of a positive integer.

#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);  // Read an integer from the user

    // Calculate the sum of the digits
    while (num > 0) {
        digit = num % 10;  // Get the last digit
        sum += digit;      // Add the digit to the sum
        num = num / 10;    // Remove the last digit from the number
    }

    // Output the result
    printf("Sum of digits = %d\n", sum);  // Print the sum of the digits

    return 0;  // Indicate that the program ended successfully
}
