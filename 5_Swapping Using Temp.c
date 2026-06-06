 // Aim: Swap the values of two variables using a temporary variable.

// 1. Temporary Variable
// 2. Without Temporary Variable (Mathematical Way)

#include <stdio.h>

int main() {
    int a, b, temp, choice;

    // Menu
    printf("Choose Swapping Method:\n");
    printf("1. Using Temporary Variable\n");
    printf("2. Without Using Temporary Variable\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Input
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    // Logic based on choice
    if (choice == 1) {
        // Using Temporary Variable
        temp = a;
        a = b;
        b = temp;
        printf("Swapped using temporary variable:\na = %d\nb = %d\n", a, b);
    }
    else if (choice == 2) {
        // Without Temporary Variable (Mathematical)
        a = a + b;
        b = a - b;
        a = a - b;
        printf("Swapped without temporary variable:\na = %d\nb = %d\n", a, b);
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
