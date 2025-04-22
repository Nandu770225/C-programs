#include <stdio.h>

#define SWAP(a, b, type) do { \
    type temp = (a); \
    (a) = (b); \
    (b) = temp; \
} while(0)

int main() 
{
    int x = 10, y = 20;
    printf("Before swap: x=%d, y=%d\n", x, y);
    SWAP(x, y, int);
    printf("After swap: x=%d, y=%d\n", x, y);
    return 0;
}