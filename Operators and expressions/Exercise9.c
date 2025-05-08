#include <stdio.h>

int main()
{
    int x, y, z, k = 10;
    k = k + (z = x + y);
    x = x + 2;
    printf("x=%d, y=%d, z=%d, k=%d\n", x, y, z, k);
    return 0;
}
