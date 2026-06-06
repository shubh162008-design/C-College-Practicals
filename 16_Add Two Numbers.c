// Aim: Write a C program that uses a function with a return value to add two numbers.

#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = add(num1, num2);
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    return 0;
}
// Example: If the user inputs 3 and 5, the program should output "The sum of 3 and 5 is 8".
// Example: If the user inputs -2 and 7, the program should output "The sum of -2 and 7 is 5".
// Example: If the user inputs 0 and 0, the program should output "The sum of 0 and 0 is 0".
 