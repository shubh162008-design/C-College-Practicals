/* Aim: Write a C program to check whether the reverse of a number is the same as the original
number, regardless of the number’s length. */

#include <stdio.h>

int main() {
    int num, reversed = 0, original, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    if (original == reversed) {
        printf("%d is a palindrome\n", original);
    } else {
        printf("%d is not a palindrome\n", original);
    }
    return 0;
}
