/*
Factorial Using Pointers
________________________
Write a program in C to find the factorial of a given number using pointers.
Test Data :
Input a number : 5
Expected Output :
The Factorial of 5 is : 120
*/
#include <stdio.h>

void findFactorial(int n, long long *result)
{
    *result = 1;
    for (int i = 1; i <= n; i++)
    {
        *result *= i;
    }
}

int main()
{
    int num;
    long long factorial;

    printf("Input a number : ");
    scanf("%d", &num);

    findFactorial(num, &factorial);

    printf("The Factorial of %d is : %lld\n", num, factorial);

    return 0;
}