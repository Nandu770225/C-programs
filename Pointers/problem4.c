#include<stdio.h>

int a = 5, b = 10;
void change1(int *p)
{
    p = &a;
}
void change2(int *p)
{
    *p = b;
}
int main()
{
    int x = 20, *ptr = &x;
    printf("%d\n", *ptr);
    change1(ptr);
    printf("%d\n", *ptr);
    change2(ptr);
    printf("%d\n", *ptr);
    return 0;
}