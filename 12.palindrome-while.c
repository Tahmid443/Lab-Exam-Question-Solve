/*
Palindrome Number Check Using a While Loop
__________________________________________
Write a C program that implements a program to check if
a given number is a palindrome using a while loop.
*/
#include <stdio.h>
int main(){
    int n, digit=0, m, rev=0;
    scanf("%d", &n);
    m = n;
    while(n!=0){
        digit = n % 10;
        n /= 10;
        rev = rev*10+ digit;
    }
    if(m==rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}