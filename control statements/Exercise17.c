#include<stdio.h>
int main()
{
    int a=6,b=4;
    while(a+b)
    {
        printf("a=%d,b=%d\n",a,b);
        a/=2;
        b%=3;
    }
    return 0;
}
