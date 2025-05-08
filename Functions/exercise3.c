#include <stdio.h>

int sgr(int x);
int cube(int x);
int func(int n);
int main(void)
{
    int n=5;
    printf("%d\n",func(n));
    return 0;
}

int sgr(int x)
{ return x*x;
} 
int cube(int x)
{ return x*x*x;
} 
int func(int n)
{
    return n+sgr(n-2)+cube(n-3);
}