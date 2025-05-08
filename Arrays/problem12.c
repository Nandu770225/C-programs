// Interchange First and Last Columns
#include<stdio.h>
#define N 4

void swapColumns(int mat[N][N]) 
{
    for (int i = 0; i < N; i++) 
    {
        int temp = mat[i][0];
        mat[i][0] = mat[i][N-1];
        mat[i][N-1] = temp;
    }
}
int main() 
{
    int mat[N][N] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16}};
    
    swapColumns(mat);
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++)
            printf("%2d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}