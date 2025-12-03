/*
Prime Check Function Variants
______________________________
Write a program in C to check whether a number is a prime number or not using
the function
Test Data :
Input a positive number : 5
Expected Output :
The number 5 is a prime number.
*/
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;

    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num;
    printf("Input a positive number : ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("The number %d is a prime number.\n", num);
    else
        printf("The number %d is not a prime number.\n", num);

    return 0;
}