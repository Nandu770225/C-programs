#include<stdio.h>

int main()
{
    int a = 0, b = 0;
    if (!a)          // Since a=0, !a is true (1)
    {
        b = !a;      // Corrected from 'la' to '!a' (logical NOT)
        if (b)       // b=1 (true)
        {
            a = !b;  // Corrected from 'lb' to '!b' (logical NOT)
        }
    }
    printf("%d, %d\n", a, b);  // Output: 0, 1
    return 0;
}