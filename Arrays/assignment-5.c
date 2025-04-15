#include<stdio.h>
void Sort(int arr[], int size) 
{
    int temp;
    for (int i = 0; i < size - 1; i++)      // Loop to select elements
    {
        for (int j = i + 1; j < size; j++)   // Loop to compare elements
        {
            if (arr[i] > arr[j])        // If arr[i] is greater, swap
            {                           
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() 
{
    int arr[100], size; 
    printf("Enter the size of the array");
    scanf("%d", &size);

    printf("Enter the elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    Sort(arr, size);

    printf("Sorted array in ascending order\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
