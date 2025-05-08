// Reverse first n elements
#include<stdio.h>

void reverseFirstN(int arr[], int size, int n) 
{
    for(int i=0; i<n/2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 3; // Reverse first 3 elements
    reverseFirstN(arr, 6, n);
    for(int i=0; i<6; i++) printf("%d ", arr[i]);
    return 0;
}