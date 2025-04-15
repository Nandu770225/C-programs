#include <stdio.h>

int main(void)
{
    int arr[10] = {2, 5, 4, 1, 8, 9, 11, 6, 3, 7};
    int small, large;
    
    small = large = arr[0];                         // Initialize both with the first element

    for (int i = 1; i < 10; i++) 
    {
        if (arr[i] < small)
            small = arr[i];
        if (arr[i] > large)
            large = arr[i];
    }

    printf("Smallest = %d, Largest = %d\n", small, large);

    return 0;
}
