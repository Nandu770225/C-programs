// Accessing memory location in arrays using pointers
#include<stdio.h>
int main() 
{
    int vector[] = {25, 47, 86, 22, 29, 54};
    int *p = vector;  // Pointer to the first element of the array

    printf("%d\n", *p);     // Print first element 
    p += 1;                 // Move pointer to the next element
    printf("%d\n", *p);     // Print second element 
    p += 1;                 // Move pointer to the next element
    printf("%d\n", *p);     // Print third element 

    return 0;
}
