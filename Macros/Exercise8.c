#include<stdio.h>

#define CUBE(x) ((x)*(x)*(x))
int main()
{
    int i=1;
    while(i<=8)
    printf("%d\n",CUBE(i++));
    return 0;
}
