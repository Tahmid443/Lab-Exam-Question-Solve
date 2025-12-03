/*
Right Angle Triangle Pattern with Asterisks
___________________________________________
Write a program in C to display a pattern like a right
angle triangle using an asterisk.
The pattern like :
*
**
***
****
*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++){
        for (int j = 0; j < i; j++){
            printf("%c", '* ');
        }
        printf("\n");
    }
        return 0;
}