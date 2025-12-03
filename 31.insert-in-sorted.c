/*
Insert in Sorted Array
______________________
Write a program in C to insert the values in the array (sorted list).
Test Data :
Input number of elements you want to insert (max 100): 5
Input 5 elements in the array in ascending order:
element - 0 : 2
element - 1 : 3
element - 2 : 4
element - 3 : 7
element - 4 : 8
Input the value to be inserted : 5
The existing array list is :
2 3 4 7 8
After Insert the list is :
2 3 4 5 7 8
*/
#include <stdio.h>

int main()
{
    int arr[100], n, i, j, value;

    printf("Enter number of element: ");
    scanf("%d", &n);

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Input the value to be inserted : ");
    scanf("%d", &value);
    int pos = n;
    for (i = 0; i < n; i++)
    {
        if (value < arr[i])
        {
            pos = i;
            break;
        }
    }
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    printf("\nThe array after sorting is:\n");
    for (i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);

    printf("\nAfter Insert the list is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
