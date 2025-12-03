/*
Copy String
____________
Write a program in C to copy one string to another string.
Test Data :
Input the string : This is a string to be copied.
Expected Output :
The First string is : This is a string to be copied.
The Second string is : This is a string to be copied.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], str2[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        str2[i] = str[i];
    }
    printf("main string = %s\n", str);
    printf("copied string  = %s", str2);
}