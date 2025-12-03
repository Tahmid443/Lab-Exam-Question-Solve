/*
Basic Pointer Declaration
__________________________
Write a program in C to show the basic declaration of a pointer.
*/
#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr = &x;


    printf("Value stored in variable x = %d\n", x);
    printf("Address of variable x = %p\n", &x);
    printf("Value stored in pointer ptr = %p\n", ptr);
    printf("Content pointed by ptr = %d\n", *ptr);

    return 0;
}