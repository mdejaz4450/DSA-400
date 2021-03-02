//Write a program to reverse an array or string
#include<iostream>
using namespace std;

/*
Input : arr [] = {1, 2, 3}
Output: arr [] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/

void reverse(int arr[], int start,int end)
{
    
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"Array in reverse order:"<<arr[i]<<endl;
    }
}

int main()
{
    int arr [] = {4,5,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    reverse(arr, 0, n-1);
    cout<<"Reverse Array:"<<endl;
    printArray(arr, n);
    return 0;

}