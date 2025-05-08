// Remove duplicates from sorted array
#include<stdio.h>

int removeSortedDuplicates(int arr[], int n) 
{
    if(n == 0) return 0;
    int j=0;
    for(int i=0; i<n-1; i++) 
    {
        if(arr[i] != arr[i+1]) arr[j++] = arr[i];
    }
    arr[j++] = arr[n-1];
    return j;
}
int main() 
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = removeSortedDuplicates(arr, 7);
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}