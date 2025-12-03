/*
String Input Print
__________________
Write a program in C to input a string and print it.
Test Data :
Input the string : Welcome
Expected Output :
The string you entered is : Welcome
*/
#include <stdio.h>
int main(){

    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    printf("%s", str);
}