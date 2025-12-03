/*
Factorial Calculation Using a While Loop
________________________________________
Write a C program that prompts the user to enter a
positive integer. It then calculates and prints the factorial
of that number using a while loop.
*/
#include <stdio.h>
int main(){
    int n, fact = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    if(n==0 || n==1){
        fact = 1;
    }
    else{
        int i = 1;
        while(i <=n){
            fact *= i;
            i++;
        }
    }
    printf("factorial of %d is: %d", n, fact);
    return 0;
}