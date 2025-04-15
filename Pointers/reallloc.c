#include<stdio.h>      
#include<stdlib.h>     

int main(void)
{
    int i, *ptr;

    // Step 1: Allocate memory for 5 integers
    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL)  // Step 2: Check if memory allocation failed
    {
        printf("Memory not available\n");
        exit(1);  // Exit the program if memory not available
    }
    // Step 3: Assign values to the first 5 elements (0, 2, 4, 6, 8)
    for (i = 0; i < 5; i++)
        *(ptr + i) = i * 2;

    // Step 4: Reallocate memory to store 9 integers (4 more added)
    ptr = (int *)realloc(ptr, 9 * sizeof(int));
    if (ptr == NULL)  // Step 5: Check if reallocation failed
    {
        printf("Memory not available\n");
        exit(1);
    }
    // Step 6: Assign values to the new 4 elements (indices 5 to 8)
    // These are 50, 60, 70, 80 based on (i * 10)
    for (i = 5; i < 9; i++)
        *(ptr + i) = i * 10;

    // Step 7: Print all 9 elements from the dynamically allocated memory
    for (i = 0; i < 9; i++)
        printf("%d ", *(ptr + i));

    printf("\n");

    return 0;
}
