/*
Sum of Positive Integers Until 0
_________________________________
Write a C program that prompts the user to input a series
of integers until the user stops entering 0 using a while
loop. Calculate and print the sum of all the positive
integers entered.
*/
#include <stdio.h>
int main()
{
    int sum = 0, n;
    printf("Input positive integers until 0:\n");
    while (1)
    {
        scanf("%d", &n);
        sum += n;
        if (n == 0)
        {
            break;
        }
    }
    printf("%d", sum);
    return 0;
}