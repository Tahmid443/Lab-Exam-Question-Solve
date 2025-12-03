/*
Maximum of Two Using Pointer
_____________________________
Write a program in C to find the maximum number between two numbers using a
pointer.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :
6 is the maximum number.
*/
#include <stdio.h>

void findMax(int *a, int *b, int *max)
{
    *max = (*a > *b) ? *a : *b;
}

int main()
{
    int num1, num2, max;

    printf("Input the first number : ");
    scanf("%d", &num1);
    printf("Input the second number : ");
    scanf("%d", &num2);

    findMax(&num1, &num2, &max);

    printf("%d is the maximum number.\n", max);

    return 0;
}