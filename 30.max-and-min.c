/*
Find Maximum & Minimum
______________________
Write a program in C to find the maximum and minimum elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of element:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n - 1 - i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int max, min;
    printf("\nThe array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        max = arr[n-1];
        min = arr[0];
    }
    printf("\nMax = %d , Min = %d", max, min);
    return 0;
}