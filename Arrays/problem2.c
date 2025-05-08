// Largest and second largest elements
#include<stdio.h>

int main() 
{
    int arr[] = {20, 40, 50, 60, 30, 80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int first = arr[0], second = arr[0];
    
    for(int i=1; i<n; i++) 
    {
        if(arr[i] > first) 
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) 
        {
            second = arr[i];
        }
    }
    printf("Largest: %d, Second largest: %d\n", first, second);
    return 0;
}