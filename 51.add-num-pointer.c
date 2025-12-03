/*
Add Two Numbers with Pointers
______________________________
Write a program in C to add two numbers using pointers.
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    int *ptr1, *ptr2;

    printf("Input the first number : ");
    scanf("%d", &num1);
    printf("Input the second number : ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    int sum = *ptr1 + *ptr2;

    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}