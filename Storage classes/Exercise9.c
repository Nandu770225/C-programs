#include<stdio.h>

int func(void);
int main()
{
    int i = 3;
    const int j = i;    // j is a constant, cannot change after initialization
    const int k = func();  // k is constant, its value is fixed after initialization
    const int *ptr = &k;   // ptr should point to a const int, as k is const
    const int m = *ptr;    // m is constant, assigned the value pointed by ptr
    printf("%d\t%d\t%d\t%d\t", i, j, k, m);
    return 0;
}
int func(void)
{
    return 4;
}
