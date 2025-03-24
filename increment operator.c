#include <stdio.h>

int main() 
{
    int x = 10;
    printf("%d \n", 1 + x++);   // first increment - First, x is used as 10 in the expression 1 + 10 = 11.
    printf("%d", ++x);          // second increment - x is incremented before use → 11 + 1 = 12.
    return 0;
}
