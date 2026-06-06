// Aim: Write a C program to search for a given element using linear search.

#include <stdio.h>
int main()
{
    int numbers[] = {4, 6, 8, 5, 7, 9, 10, 43, 23, 44, 43, 34};
    int size = 11;
    int search = 43;
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == search)
        {
            printf("Found at position %d\n", i);
            found = 1;
        }
    }
    if (!found)
    {
        printf("Not found\n");
    }
    return 0;
} 