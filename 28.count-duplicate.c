/*
Count Duplicate Elements
________________________
Write a program in C to count the total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
*/
#include <stdio.h>
int main(){
    int n, count = 0;
    printf("Enter number of element:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}