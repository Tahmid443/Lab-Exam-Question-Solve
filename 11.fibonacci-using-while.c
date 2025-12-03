/*
Fibonacci Sequence Generation Using a While Loop
________________________________________________
Write a C program to find and print the first 10 Fibonacci
numbers using a while loop.
*/
#include <stdio.h>

int main()
{
    int n=10, first = 0, second = 1, next, i = 1;

    if (n >= 1)
    {
        printf("%d ", first);
    }
    if (n >= 2)
    {
        printf("%d ", second);
    }
    while (i <= n - 2)
    {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
        i++;
    }
    return 0;
}
