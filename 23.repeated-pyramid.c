/*
Pyramid Pattern with Repeated Numbers
_____________________________________
Write a C program to make such a pattern like a pyramid
with a number which will repeat the number in the same
row.
   1
  2 2
 3 3 3
4 4 4 4
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        // loop for space
        for (int k = n - i - 1; k >= 0; k--)
        {
            printf(" ");
        }
        // loop for number
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}