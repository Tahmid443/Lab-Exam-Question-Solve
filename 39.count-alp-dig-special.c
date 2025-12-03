/*
Count Alphabets, Digits, Specials
___________________________________
Write a program in C to count the total number of alphabets, digits and special
characters in a string.
Test Data :
Input the string : Welcome to w3resource.com
Expected Output :
Number of Alphabets in the string is : 21
Number of Digits in the string is : 1
Number of Special characters in the string is : 4
*/
#include <stdio.h>
int main(){
    int alp=0, dig=0, spc=0;
    char str[100];
    fgets(str, 100, stdin);
    for (int i = 0; str[i] != '\0'; i++){
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            dig++;
        }
        else{
            spc++;
        }
    }
    printf("\nNumber of alphabets in the string is: %d\n", alp);
    printf("Number of digits in the string is: %d\n", dig);
    printf("Number of special characters in the string is: %d\n", spc);
}