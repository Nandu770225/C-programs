#include<stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i < 8; i++)
    {
        if (i == 3 || i == 5)
            continue; // Skip when i is 3 or 5
        for (j = 1; j <= i; j++)
        {
            for (k = j; k > 0; k--)
                printf("%d ", k); // Print decreasing numbers from j to 1
            printf("\n");
        }
        printf("\n"); // Extra line after each i block
    }
    return 0;
}
