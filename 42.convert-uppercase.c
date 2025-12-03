/*
Convert String to Uppercase
___________________________
Write a program in C to convert a string to uppercase.
Test Data :
Input a string in lowercase : the quick brown fox jumps over the lazy dog
Expected Output :
Here is the above string in UPPERCASE :
THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.
*/
#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
