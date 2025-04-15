#include <stdio.h>

void printArr(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    printArr(arr, 5);                      // Pass array to function
    
    return 0;
}
