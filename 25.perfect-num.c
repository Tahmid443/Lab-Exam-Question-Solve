/*
Perfect Number Check
____________________
Write a C program to check whether a given number is a
'Perfect' number or not.
Test Data :
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect.
*/
#include <stdio.h>
int main(){
    int n, sum=0;
    printf("Input the number: ");
    scanf("%d", &n);
    printf("The positive divisor: ");
    for (int i = 1; i <= n / 2;i++){
        if(n%i==0){
            sum += i;
            printf("%d ", i);
        }
    }
    printf("\nThe sum of the divisor is: %d\n", sum);
    if(n==sum){
        printf("Perfect number");
    }
    else{
        printf("Not a perfect number");
    }
    return 0;
}