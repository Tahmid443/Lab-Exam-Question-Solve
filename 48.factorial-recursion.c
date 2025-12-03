/*
Factorial Recursion Variants
_____________________________
Write a program in C to find the Factorial of a number using recursion.
Test Data :
Input a number : 5
Expected Output:
The Factorial of 5 is : 120
*/
#include <stdio.h>

long long factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int num;
    printf("Input a number : ");
    scanf("%d", &num);

    printf("The Factorial of %d is : %lld\n", num, factorial(num));

    return 0;
}