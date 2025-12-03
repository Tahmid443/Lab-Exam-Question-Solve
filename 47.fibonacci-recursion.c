/*
Fibonacci Series Recursion Variants
___________________________________
Write a program in C to print the Fibonacci Series using recursion.
Test Data :
Input number of terms for the Series (< 20) : 10
Expected Output:
Input number of terms for the Series (< 20) : 10
The Series are :
1  1  2  3  5  8  13  21  34  55
*/
#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int terms;
    printf("Input number of terms for the Series (< 20) : ");
    scanf("%d", &terms);

    printf("Input number of terms for the Series (< 20) : %d\n", terms);
    printf("The Series are :\n");

    for (int i = 1; i <= terms; i++)
    {
        printf("%d  ", fibonacci(i));
    }
    printf("\n");

    return 0;
}