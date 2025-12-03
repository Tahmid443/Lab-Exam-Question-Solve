/*
Right Angle Triangle with Sequentially Increasing
Numbers
__________________________________________________
Write a program in C to make such a pattern like a right
angle triangle with the number increased by 1.
The pattern like :
1
2 3
4 5 6
7 8 9 10
*/
#include <stdio.h>
int main()
{
    int n,num=1;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}