// Aim:Write a C program to check whether a given number is a perfect number or not.

#include <stdio.h>
int main() {
int num, sum = 0, i;
printf("Enter a number: ");
if (scanf("%d", &num) != 1 || num <= 0) {
    printf("Invalid input. Please enter a positive integer.\n");
    return 1;
}
for(i = 1; i < num; i++) {
    if(num % i == 0) {
        sum += i;
    }
}
if(sum == num) {
    printf("%d is a perfect number.\n", num);
} else {
    printf("%d is not a perfect number.\n", num);
}
return 0;
}
