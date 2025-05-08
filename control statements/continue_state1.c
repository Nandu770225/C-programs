#include<stdio.h>

int main()
{
    int i, j, x;

    for (i = 1; i < 10; i++)
    {
        x = i + 5;
        if (i % 2 == 0) // If i is even
        {
            x += i;
            for (j = i; j > 0; j--)
            {
                if (i == j)
                    x++; // Increment x if i == j
                else
                    x--; // Else decrement x

                printf("%d ", x); 
            }
            printf("\n"); // Newline after each i block
        }
        else
            printf("%d\n", x); // For odd i, just print x
    }
    return 0;
}
