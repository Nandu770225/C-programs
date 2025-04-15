#include <stdio.h>
void checkPointer(int* ptr) 
{
    if (ptr == NULL)            // Check if the pointer is NULL before dereferencing
    {                    // Always check before dereferencing.without checking will cause a segmentation fault.
        printf("Pointer is NULL. Cannot access value\n");
    } 
    else 
    {                           // If pointer is valid, print the value
        printf("Value pointed by pointer: %d\n", *ptr);        
    }
}

int main() 
{
    int num = 100;
    int* validPtr = &num;      // Here Create a valid pointer pointing to num
    int* nullPtr = NULL;       // Create a NULL pointer (does not point to any valid memory)

    printf("Case 1: Valid Pointer\n");        // Here Passing a valid pointer to the function
    checkPointer(validPtr);

    printf("\nCase 2: NULL Pointer\n");      // Passing a NULL pointer to the function
    checkPointer(nullPtr);

    return 0;
}
