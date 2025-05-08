// Reverse Columns of Matrix
#include<stdio.h>
#define N 4

void reverseColumns(int mat[N][N]) 
{
    for (int j = 0; j < N/2; j++) 
    {
        for (int i = 0; i < N; i++) 
        {
            int temp = mat[i][j];
            mat[i][j] = mat[i][N-1-j];
            mat[i][N-1-j] = temp;
        }
    }
}
int main() 
{
    int mat[N][N] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16}};
    
    reverseColumns(mat);
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++)
            printf("%2d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}