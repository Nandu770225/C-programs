#include<stdio.h>
void checkPointer(int* ptr) 
{
    if (ptr == NULL)           // Checking if the pointer is NULL
    {  
        printf("Received NULL pointer, No valid memory to access \n");
    } 
    else 
    {
        printf("Received Non-NULL pointer, value %d\n", *ptr);
    }
}

int main() 
{
    int num = 42;                  //  Here Declare an integer variable

    // Here Passing a valid pointer
    printf("Case 1: Passing a valid pointer\n");
    checkPointer(&num);                 // Pass the address of num to the function

    // Here Passing NULL
    printf("\nCase 2: Passing a NULL pointer\n");
    checkPointer(NULL);                 // Explicitly pass NULL to the function

    return 0;
}
