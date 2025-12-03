/*
Right Angle Triangle Pattern with Numbers
_________________________________________
Write a C program to display a pattern like a right angle
triangle with a number.
The pattern like :
1
12
123
1234
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}