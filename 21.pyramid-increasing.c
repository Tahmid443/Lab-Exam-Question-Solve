/*
Pyramid Pattern with Increasing Numbers
________________________________________
Write a program in C to make a pyramid pattern with
numbers increased by 1.
      1
     2 3
   4  5  6
 7  8  9  10
*/
#include <stdio.h>
int main()
{
    int n, num = 1;
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
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}