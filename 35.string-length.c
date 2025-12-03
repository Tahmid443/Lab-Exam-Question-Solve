/*
String Length Without Library
_____________________________
Write a program in C to find the length of a string without using library functions.
Test Data :
Input the string : w3resource.com
Expected Output :
Length of the string is : 15

*/
#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for (i = 1; str[i] != '\0'; i++)
    {
        length++;
    }

    printf("Length of the string is: %d", length);

    return 0;
}
