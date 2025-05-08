// Remove duplicates from unsorted array
#include<stdio.h>

int removeDuplicates(int arr[], int n) 
{
    if(n == 0) return 0;
    
    int temp[n], j=0;
    for(int i=0; i<n-1; i++) 
    {
        if(arr[i] != arr[i+1]) temp[j++] = arr[i];
    }
    temp[j++] = arr[n-1];
    for(int i=0; i<j; i++) arr[i] = temp[i];
    return j;
}
int main() 
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = removeDuplicates(arr, 7);
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}