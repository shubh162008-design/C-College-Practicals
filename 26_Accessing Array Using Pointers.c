//Aim: Write a C program to access array elements using pointers instead of indexing.

#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}
// This program initializes an array of integers and uses a pointer to access and print each element of the array without using array indexing.