/*
Vowel or Consonant Check
_________________________
Write a C program to check whether an alphabet is a
vowel or a consonant.
Test Data :
k
Expected Output :
The alphabet is a consonant.
*/
#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            printf("The alphabet is a vowel");
        }
        else{
            printf("The alphabet is a consonant");
        }
    }
    else{
        printf("Not a character");
    }
        return 0;
}