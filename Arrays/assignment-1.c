#include<stdio.h>

int minimum(int x[], int size) 
{
    int i, min = x[0];                           // Initialize with the first element

    for (i = 1; i < size; i++) 
    {
        if (min > x[i]) 
        {
            min = x[i];
        }
    }

    return min;
}

int main() 
{
    int a[5], i, n;
    
    printf("Enter the size\n");
    scanf("%d", &n);

    if (n <= 0 || n > 5)                                       // Added input validation                   
    {                                                  
        printf("Size must be between 1 and 5\n");
        return 1;
    }

    for (i = 0; i < n; i++) 
    {
        printf("Enter a value into a[%d] ", i);
        scanf("%d", &a[i]);
    }

    printf("\nMinimum is %d\n", minimum(a, n));

    return 0;
}
