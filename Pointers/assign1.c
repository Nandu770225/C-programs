#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int rows = 3, cols = 4;  
    // Allocate memory for 2D array using a single pointer
    int *arr = (int *)malloc(rows * cols * sizeof(int));

    if (arr == NULL)      // Check if memory allocation was successful
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    // Accessing elements using the formula: arr[i * cols + j]
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            arr[i * cols + j] = i * cols + j;  // Assigning values
        }
    }
    // Printing the array in 2D format
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%2d ", arr[i * cols + j]);   // Access element at row i and column j
        }
        printf("\n");
    }
    // Free the allocated memory
    free(arr);
    return 0;
}
