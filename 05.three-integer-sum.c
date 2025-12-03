/*
Three Integer Sum Match
________________________
Write a C program to check whether it is possible to add
two integers to get the third integer from three given
integers.
*/
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b == c || b + c == a || a + c == b)
    {
        printf("Possible");
    }
    else
    {
        printf("Not Possible");
    }
    return 0;
}