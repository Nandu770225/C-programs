//2D array using an array of pointers
#include<stdio.h>                                                    //2D array using an array of pointers
#include<stdlib.h>                             

int main(void)
{
    int i, j, row, column;
    // Taking input for rows and columns
    printf("Enter number of rows and columns ");
    scanf("%d %d", &row, &column);

    // Declare an array of pointers to integers
    int *a2D[row];   // a2D[i] will point to memory for row i

    // Dynamically Allocate memory for each row
    for(i = 0; i < row; i++) 
    {
        a2D[i] = (int *)malloc(column * sizeof(int));  // Allocate memory for 'column' integers
    }
    // Input elements into 2D array
    for(i = 0; i < row; i++) 
    {
        for(j = 0; j < column; j++) 
        {
            printf("Enter a2D[%d][%d] ", i, j);
            scanf("%d", &a2D[i][j]);    
        }
    }
    // Print elements
    printf("\nThe 2D array is\n");
    for(i = 0; i < row; i++) 
    {
        for(j = 0; j < column; j++) 
        {
            printf("%d ", a2D[i][j]);       // Print each element
        }
        printf("\n");
    }
    // Free memory
    for(i = 0; i < row; i++) 
    {
        free(a2D[i]);
    }

    return 0;
}
