/*
Right Angle Triangle with Repeated Number per Row
_________________________________________________
Write a program in C to make such a pattern like a right
angle triangle with a number which will repeat a number
in a row.
The pattern like :
1
22
333
4444
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
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}