#include<stdio.h>

#define MAX 3
int main()
{
    printf("value of MAX is %d\n",MAX);
    #undef MAX
    #ifdef MAX
    printf("Have a good day");
    #endif
    return 0;
}
