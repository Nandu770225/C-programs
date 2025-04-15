#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 100;

    free(ptr);      // Free the allocated memory
    ptr = NULL;     // To avoid dangling pointer, set it to NULL after freeing

    if (ptr != NULL) 
    {
        printf("Value: %d\n", *ptr);       // This block is skipped because ptr is NULL
    } 
    else 
    {
        printf("Pointer is NULL. Safe and no dangling pointer\n");
    }

    return 0;
}
