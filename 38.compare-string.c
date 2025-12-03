/*
Compare Strings Without Library
________________________________
Write a program in C to compare two strings without using string library functions.
Test Data :
Check the length of two strings: --------------------------------
Input the 1st string : aabbcc
Input the 2nd string : abcdef
String1: aabbcc
String2: abcdef
Expected Output : Strings are not equal.
Check the length of two strings: --------------------------------
Input the 1st string : aabbcc
Input the 2nd string : aabbcc
String1: aabbcc
String2: aabbcc
Expected Output : Strings are equal.
*/
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i = 0, flag = 0;

    printf("Enter first string: ");
    fgets(str1,100,stdin);

    printf("Enter second string: ");
    fgets(str2,100,stdin);

    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 1; 
            break;
        }
        i++;
    }

    if (flag == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
