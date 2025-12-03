/*
Concatenate Strings Manually
____________________________
Write a program in C to combine two strings manually.
Test Data :
Input the first string : this is string one
Input the second string : this is string two
Expected Output :
After concatenation the string is :
this is string one this is string two
*/
#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    int i, j;

    printf("Enter first string: ");
    gets(s1);

    printf("Enter second string: ");
    gets(s2);

    for (i = 0; s1[i] != '\0'; i++)
        ;

    for (j = 0; s2[j] != '\0'; j++)
    {
        s1[i] = s2[j];
        i++;
    }

    s1[i] = '\0';

    printf("Concatenated string = %s\n", s1);

    return 0;
}
