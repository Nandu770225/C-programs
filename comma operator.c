#include<stdio.h>

int main() 
{
    int x = 10;
    int y = (x++, x++, x++);             // The comma operator evaluates expressions from left to right
    printf("%d %d\n", x, y);             // The value of the last expression becomes the result
    return 0;                            // x was incremented 3 times (10 → 11 → 12 → 13)
}                                        // Value from the last expression before incrementing i 12
