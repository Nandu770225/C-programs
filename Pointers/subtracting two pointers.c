#include <stdio.h>
int main() 
{
    int vector[] = {32, 48, 76};
    int *p0 = vector;          // int *p0 = &vector[0];
    int *p1 = vector + 1;
    int *p2 = vector + 2;

    printf("p2 - p0: %d\n", p2 - p0);
    printf("p1 - p0: %d\n", p1 - p0);
    printf("p2 - p1: %d\n", p2 - p1);
    printf("p0 - p2: %d\n", p0 - p2);
    printf("p0 - p1: %d\n", p0 - p1);

    printf("*p0 - *p1: %d\n", *p0 - *p1);
    printf("*p1 - *p0: %d\n", *p1 - *p0);
    printf("*p2 - *p0: %d\n", *p2 - *p0);
    printf("*p2 - *p1: %d\n", *p2 - *p1);

    return 0;
}
