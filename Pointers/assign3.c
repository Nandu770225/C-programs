#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int **a2D;        // Pointer to pointer (for 2D array)
    int i, j, row, column;

    // Input: number of rows and columns
    printf("Enter number of rows and columns ");
    scanf("%d %d", &row, &column);

    // Step 1: Allocate memory for an array of pointers (each for one row)
    a2D = (int **)malloc(row * sizeof(int *));

    // Step 2: Allocate memory for each row (array of integers)
    for(i = 0; i < row; i++) 
    {
        a2D[i] = (int *)malloc(column * sizeof(int));
    }
    // Step 3: Input values into 2D array
    for(i = 0; i < row; i++) 
    {
        for(j = 0; j < column; j++) 
        {
            printf("Enter a2D[%d][%d]: ", i, j);
            scanf("%d", &a2D[i][j]);
        }
    }
    // Step 4: Display the 2D array
    printf("\nThe 2D array is:\n");
    for(i = 0; i < row; i++) 
    {
        for(j = 0; j < column; j++) 
        {
            printf("%d ", a2D[i][j]);
        }
        printf("\n");
    }
    // Step 5: Free allocated memory
    for(i = 0; i < row; i++) 
    {
        free(a2D[i]);   // Free each row
    }
    free(a2D);          // Free the array of pointers

    return 0;
}
