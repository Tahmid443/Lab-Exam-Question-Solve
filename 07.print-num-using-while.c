/*
Print Numbers Using Two While Loops
___________________________________
Write a C program to print numbers from 0 to 10 and 10
to 0 using two while loops.
*/
#include <stdio.h>
int main(){
    int i = 0;
    while(i<=10){
        printf("%d ", i);
        i++;
    }
    printf("\n");
    int j = 10;
    while (j >= 0)
    {
        printf("%d ", j);
        j--;
    }
    return 0;
}