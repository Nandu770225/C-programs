// Reverse Rows of Matrix
#include<stdio.h>
#define N 4

void reverseRows(int mat[N][N]) 
{
    for (int i = 0; i < N/2; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            int temp = mat[i][j];
            mat[i][j] = mat[N-1-i][j];
            mat[N-1-i][j] = temp;
        }
    }
}
int main() 
{
    int mat[N][N] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16}};
    
    reverseRows(mat);
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++)
            printf("%2d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}