/*
Sum of First 10 Natural Numbers
_______________________________
Write a C program to compute the sum of the first 10
natural numbers.
*/
#include <stdio.h>
int main(){
    int sum = 0;
    for (int i = 1; i <= 10; i++){
        sum += i;
    }
    printf("%d", sum);
    return 0;
}