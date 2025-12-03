/*
Odd Natural Numbers and Their Sum
_________________________________
Write a C program to display the n terms of odd natural
numbers and their sum.
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i+=2)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}