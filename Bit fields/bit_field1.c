#include<stdio.h>

struct date
{
    unsigned int d;
    unsigned int m;
    unsigned int y;
};

int main()
{
    printf("size of data is %lu\n", sizeof(struct date));
    struct date dt = {21, 04, 2025};
    printf("date is %d/%d/%d", dt.d, dt.m, dt.y);
    return 0;
}