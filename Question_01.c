//Write a program to reverse an array or string
#include<stdio.h>
/*
Input : arr [] = {1, 2, 3}
Output: arr [] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/

void reverse(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");  
    
}

int main()
{
    int arr [] = {4,5,1,2};
    printArray(arr, 4);
    reverse(arr, 0, 3);
    printf("Reverse Array is :\n");
    printArray(arr, 4);
    return 0;
}