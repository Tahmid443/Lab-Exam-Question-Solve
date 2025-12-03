/*
Insert in Unsorted Array
________________________
Write a program in C to insert values in the array (unsorted list).
Test Data :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10
*/
#include <stdio.h>

int main()
{
    int arr[100], n, i, pos, value;

    printf("Enter number of element: ");
    scanf("%d", &n);

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the position where you want to insert: ");
    scanf("%d", &pos);

    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    printf("After inserting, the new array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
