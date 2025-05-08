#include<stdio.h>

int count (int n);
int main()
{
    printf("%d\n",count(17243));
    return 0;
}
int count (int n)
{
    if(n==0)
    return 0;
return 1+count(n/10);
}

