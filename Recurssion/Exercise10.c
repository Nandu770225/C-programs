#include<stdio.h>

void func1(int a,int b);
void func2(int a,int b);
int main()
{
    func1(10,18);
    printf("\n");
    func2(10,18);
    return 0;
}
void func1(int a,int b)
{
    if(a>b)
     return ;
    printf("%d",b);
    func1(a+1,b);
}
void func2(int a,int b)
{
    if(a>b)
    return ;
func2(a+1,b);
printf("%d ",b);
}
