// Sort array (ascending & descending)
#include<stdio.h>

void sortArray(int arr[], int n) 
{
    // Bubble sort
    for(int i=0; i<n-1; i++) 
    {
        for(int j=0; j<n-i-1; j++) 
        {
            if(arr[j] > arr[j+1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Ascending: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\nDescending: ");
    for(int i=n-1; i>=0; i--) printf("%d ", arr[i]);
}
int main() 
{
    int arr[] = {20, 40, 50, 60, 30, 80};
    sortArray(arr, 6);
    return 0;
}