#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    free(ptr);        // Here Memory deallocated
              //free(ptr) releases the heap memory that ptr was pointing to
              //The memory is deallocated, but ptr still holds the old address

    printf("%d\n", *ptr); // Dangling pointer ,*ptr here is undefined behavior
    return 0;            
}
