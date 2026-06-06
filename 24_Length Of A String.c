// Aim: Write a C program to find the length of a string using a pointer and library function.

#include <stdio.h>
#include <string.h>
int main()
{
    char text[] = "Hello World";
    char *ptr = text;         // pointer to the string
    int length = strlen(ptr); // use library function strlen to get length
    printf("Length of the string \"%s\" is: %d\n", text, length);
    return 0;
}
