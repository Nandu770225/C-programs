#include<stdio.h>

int thirce(int i);
int main()
{
    const int i=23;
    const int j=thirce(i);
    printf("j=%d\n",j);
}
int thirce(int i)
{
    return 3*i;
}
