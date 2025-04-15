#include<stdio.h>

int main() 
{
    int rows = 3, cols = 4;   
    int i, j, A[rows][cols], B[rows][cols], C[rows][cols];

    printf("Enter elements of matrix A (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++)                                        // Input elements of first matrix
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of matrix B (%d x %d):\n", rows, cols);       // Input elements of second matrix
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < rows; i++) 
    {                                                           // Adding the matrices
        for (j = 0; j < cols; j++) 
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");                // Display the result
    for (i = 0; i < rows; i++)
     {
        for (j = 0; j < cols; j++) 
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
