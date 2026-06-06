//Aim: Write a C program to reverse the elements of an array using pointers.

#include <stdio.h>
void reverse(int *arr, int n) {
    int *start = arr;
    int *end = arr + n - 1;
    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
// Output: 5 4 3 2 1 