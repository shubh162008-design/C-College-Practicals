//Aim: Write a C program to find out if string is palindrome or not. 

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int flag = 1, len, i;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}
