#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to calculate length of a string using pointer
unsigned int stringLength(const char *string) 
{
    unsigned int length = 0;
    while (*(string++))    // Move pointer forward while character is not NULL
    {  
        length++;
    }
    return length;
}
int main() 
{
    char simpleArray[] = "simple string";  // Array initialized with string
    char *simplePtr = (char *)malloc(strlen("simple string") + 1);  // Dynamic allocation
    strcpy(simplePtr, "simple string");  // Copy string into dynamically allocated memory

    // Call function with different forms of string inputs
    printf("%d\n", stringLength(simplePtr));          // Using dynamically allocated pointer
    printf("%d\n", stringLength(simpleArray));        // Using array
    printf("%d\n", stringLength(&simpleArray[0]));    // Using address of first element of array

    free(simplePtr);  // Free allocated memory
    return 0;
}
