/*
Write a C program to display the pattern as a pyramid
using asterisks, with each row containing an odd number
of asterisks.
  *
 ***
*****
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // loop for space
        for (int k = n - i - 1; k >= 0; k--)
        {
            printf("  ");
        }
        // loop for number
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}