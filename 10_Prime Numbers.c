// Aim: Generate prime numbers between 1 and n

#include <stdio.h>

int main() {
    int n, i, j, isprime;

    // Input
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are: \n", n);

    for(i = 2; i <= n; i++) {
        isprime = 1;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isprime = 0;
                break;
            }
        }
        if(isprime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
