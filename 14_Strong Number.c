// Aim: Write a C program to check whether a given number is a strong number or not. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int is_strong_number(int num) {
    int sum = 0, temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return sum == num;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (is_strong_number(number)) {
        printf("%d is a strong number.\n", number);
    } else {
        printf("%d is not a strong number.\n", number);
    }
    return 0;
}
// Example: 145 is a strong number because 1! + 4! + 5! = 145
// Example: 123 is not a strong number because 1! + 2! +
// 3! = 9 which is not equal to 123

