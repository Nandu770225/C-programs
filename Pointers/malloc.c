// Program to understand dynamic allocation of memory using malloc
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *p, n, i;

    printf("Enter the number of integers to be entered: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));  // Allocate memory for n integers

    if (p == NULL)
    {
        printf("Memory not available\n");
        exit(1);  // Exit if memory allocation fails
    }
    // Input the integers
    for (i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", p + i);  // Using pointer arithmetic
    }
    // Display the entered integers
    for (i = 0; i < n; i++)
        printf("%d\t", *(p + i));  // Dereferencing pointer to access value

    return 0;
}
