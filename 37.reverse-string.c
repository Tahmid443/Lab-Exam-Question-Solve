/*
Reverse String Characters
_________________________
Write a program in C to print individual characters of a string in reverse order.
Test Data :
Input the string : w3resource.com
Expected Output :
The characters of the string in reverse are :
m
o  c  .  e  c  r  u  o  s  e  r  3  w
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    printf("%s", str);
    int len = strlen(str);
    for (int i = len; i>=0; i--)
    {
        printf("%c ", str[i]);
    }
}