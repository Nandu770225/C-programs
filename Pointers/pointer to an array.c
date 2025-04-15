#include<stdio.h>
int main() 
{
    int arr[5] = {10, 20, 30, 40, 50};

    int *p = arr;            // Points to first element
    int (*ptr)[5] = &arr;    // Points to entire array

    printf("Using *p: %d\n", *p);             
    printf("Using *ptr: %d\n", *(*ptr));      

    p++;          // Moves to arr[1]
    ptr++;        // Moves past the entire array

    printf("After p++*p = %d\n", *p);       
    printf("After ptr++ ptr = %p\n", ptr);   
}
