#include<stdio.h>
// Function to find the minimum value in an array
int findMinimum(int x[], int size) 
{
    int min = x[0]; // Assume first element is the smallest

    for (int i = 1; i < size; i++) 
    {
        if (x[i] < min) 
        {
            min = x[i]; // Update min if a smaller value is found
        }
    }

    return min;
}
int main() 
{
    int arr[100]; 
    for (int i = 0; i < 100; i++) 
    {
        arr[i] = i + 1; // Storing values 1 to 100
    }

    // Passing the entire array to find the minimum value
    int minValue1 = findMinimum(arr, 100);
    printf("Minimum value in the array: %d\n", minValue1);

    // Passing a part of the array (first 50 elements)
    int minValue2 = findMinimum(arr, 25);
    printf("Minimum value in the first 50 elements: %d\n", minValue2);

    return 0;
}
