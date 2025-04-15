#include <stdio.h>
#define ROW1 3
#define COL1 4
#define ROW2 4
#define COL2 2

int main(void) 
{
    int mat1[ROW1][COL1], mat2[ROW2][COL2], mat3[ROW1][COL2];
    int i, j, k;

    printf("Enter matrix mat1(%dx%d) row wise\n", ROW1, COL1);      // Input matrix 1
    for (i = 0; i < ROW1; ++i)
     {
        for (j = 0; j < COL1; ++j)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter matrix mat2(%dx%d) row wise\n", ROW2, COL2);            // Input matrix 2
    for (i = 0; i < ROW2; ++i) 
    {
        for (j = 0; j < COL2; ++j) 
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < ROW1; ++i)                            // Multiplying the matrices
    {
        for (j = 0; j < COL2; ++j) 
        {
            mat3[i][j] = 0;
            for (k = 0; k < COL1; ++k) 
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("The resultant matrix mat3 is\n");                // Display the resultant matrix
    for (i = 0; i < ROW1; ++i) 
    {
        for (j = 0; j < COL2; ++j) 
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
