/*
Sum and Average of 10 Numbers from Keyboard
___________________________________________
Write a program in C to read 10 numbers from the
keyboard and find their sum and average.
*/
#include <stdio.h>
int main()
{
    float sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("%.2f", sum/10);
    return 0;
}