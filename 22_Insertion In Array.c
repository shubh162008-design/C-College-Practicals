// Aim: Write a C program to insert an element in an array at a specific index.

#include <stdio.h>
int main()
{
    int arr[100], n, e, idx, i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element: ");
    scanf("%d", &e);
    printf("Enter index (0 to %d): ", n);
    scanf("%d", &idx);
    if (idx < 0 || idx > n || n >= 100)
    {
        printf("\nError\n");
    }
    else
    {
        for (i = n; i > idx; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[idx] = e;
        n++;
        printf("\nNew array:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}