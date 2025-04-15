#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *p, n, i;

    printf("Enter the number of integers to be entered ");
    scanf("%d", &n);

    // Using calloc() to allocate memory for 'n' integers and initialize to 0
    p = (int *)calloc(n, sizeof(int));

    if (p == NULL)   // Check if memory allocation failed
    {
        printf("Memory not available\n");
        exit(1);
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter an integer ");
        scanf("%d", p + i);  // Store each value in dynamically allocated memory
    }
    // Display the entered integers
    printf("\nYou entered\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(p + i));  // Print each value using pointer dereferencing
    }

    free(p);  
    return 0;
}
