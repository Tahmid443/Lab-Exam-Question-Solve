/*
Prime Check Recursion Variants
______________________________
Write a program in C to check if a number is a prime number or not using
recursion.
Test Data :
Input any positive number : 7
Expected Output :
The number 7 is a prime number.
*/
#include <stdio.h>
#include <stdbool.h>

bool isPrimeRecursive(int num, int divisor)
{
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % divisor == 0)
        return false;
    if (divisor * divisor > num)
        return true;

    return isPrimeRecursive(num, divisor + 1);
}

int main()
{
    int num;
    printf("Input any positive number : ");
    scanf("%d", &num);

    if (isPrimeRecursive(num, 2))
        printf("The number %d is a prime number.\n", num);
    else
        printf("The number %d is not a prime number.\n", num);

    return 0;
}