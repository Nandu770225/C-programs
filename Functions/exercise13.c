#include<stdio.h>

int diff(int x,int y)
{
    return x-y;

}
int sum(int x,int y)
{
    return x+y;
}
int main()
{
    int a=20,b=5,c=2,d=6;
    printf("%d\t",a+diff(d,c));
    printf("%d\t",diff(a,sum(diff(b,c),d)));
    return 0;
}
