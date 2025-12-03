/*
Decimal to Binary Conversion Function Variants
_______________________________________________
Write a program in C to convert a decimal number to a binary number using the
function.
Test Data :
Input any decimal number : 65
Expected Output :
The Binary value is : 1000001
*/
#include <stdio.h>

int decimalToBinary(int n)
{
    int binary = 0, place = 1;

    while (n > 0)
    {
        int rem = n % 2;
        binary = binary + rem * place;
        place *= 10;
        n /= 2;
    }

    return binary;
}

int main()
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary = %d\n", decimalToBinary(num));
    return 0;
}
