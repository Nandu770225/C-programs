#include<stdio.h>

int main()
{
    int x, y, z;
    x = 8;    // 8++ we can not do like this 8 is a constant value can not increment a constant.
    y = ++x;
    z = (x++) - y--;
    printf("x=%d, y=%d, z=%d\n", x, y, z);
    return 0;
}
