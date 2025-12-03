/*
Print Unique Elements
_____________________
Write a program in C to print all unique elements in an array.
Test Data :
Print all unique elements of an array: ------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5
*/
#include <stdio.h>
int main()
{
    int n, i, j, count;
    printf("Enter the n of the array: ");
    scanf("%d", &n);
    int arr[n], freq[n];
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1; 
    }
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0; 
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count; 
        }
    }
    printf("Unique elements in the array are: ");
    for (i = 0; i < n; i++)
    {
        if (freq[i] == 1)
        { 
            printf("%d ", arr[i]);
        }
    }
    return 0;
}