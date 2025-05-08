#include<stdio.h>

void func(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void func2(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x = 20, y = 30, *ptr = &x;
    printf("%d\n", *ptr);
    func(&x, &y);
    printf("%d\n", *ptr);
    func2(ptr, &y);
    printf("%d\n", *ptr);
    return 0;
}