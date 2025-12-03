/*
Convert String to Lowercase
___________________________
Write a program in C to convert a string to lowercase.
Test Data :
Input a string in UPPERCASE : THE QUICK BROWN FOX JUMPS OVER THE
LAZY DOG.
Expected Output :
Here is the above string in lowercase :
the quick brown fox jumps over the lazy dog.
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
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Lowercase string: %s\n", str);

    return 0;
}
