#include<stdio.h>

int a=5;
void func(void);
int main()
{
    func();
    printf("%d\n",a);
    return 0;
}
void func(void)
{
    int a=2;
    printf("%d\t",a);
}
