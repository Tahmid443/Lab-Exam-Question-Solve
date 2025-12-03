/*
Armstrong & Perfect Number Function Variants
____________________________________________
Write a program in C to check Armstrong and Perfect numbers using the
function.
Test Data :
Input any number: 371
Expected Output :
The 371 is an Armstrong number.
The 371 is not a Perfect number.
*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isArmstrong(int num)
{
    int original = num, sum = 0, digits = 0, temp = num;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

bool isPerfect(int num)
{
    if (num <= 1)
        return false;

    int sum = 1;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
            if (i != num / i)
            {
                sum += num / i;
            }
        }
    }

    return (sum == num);
}

int main()
{
    int num;
    printf("Input any number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("The %d is an Armstrong number.\n", num);
    else
        printf("The %d is not an Armstrong number.\n", num);

    if (isPerfect(num))
        printf("The %d is a Perfect number.\n", num);
    else
        printf("The %d is not a Perfect number.\n", num);

    return 0;
}