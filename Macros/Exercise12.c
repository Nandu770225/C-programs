#include<stdio.h>

#define y 10
int main()
{
    #if x||y && z
    printf("sea in depth\n");
    #else
    printf("see in depth\n");
    #endif
    return 0;
}
