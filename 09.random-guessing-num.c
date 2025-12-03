/*
Random Number Guessing Game
____________________________
Write a C program that generates a random number
between 1 and 20 and asks the user to guess it. Use a
while loop to give the user multiple chances until they
guess the correct number.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    printf("Enter random number between (1 to 20):");
    srand(time(0));
    int random, guess;
    random = rand() % 20 + 1;
    while(1){
        scanf("%d", &guess);
        if(random > guess){
            printf("Try higher!\n");
        }
        else if(random < guess){
            printf("Try lower!\n");
        }
        else{
            printf("Congratulation you found, The number is %d", guess);
            break;
        }
    }
    return 0;
}