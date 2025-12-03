/*
Pyramid Pattern with Asterisks
______________________________
Write a C program to make such a pattern as a pyramid
with an asterisk.

    *
   * *
  * * *
* *  * *
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
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}