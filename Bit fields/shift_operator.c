#include<stdio.h>

void displayBits (int x)
{
    for (int i = 31; i >= 0; i--)
    printf("%d", (x >> i) & 1);
    printf("\n");
}
int main()
{
    int a=7;
    printf("a=%d\t", a); displayBits(a);
    a=a<<2;
    printf("a=%d\t", a); displayBits(a);
    a=a<<3;
    printf("a=%d\t", a); displayBits(a);
    a=a>>1;
    printf("a=%d\t", a); displayBits(a);
    a=a>>3;
    printf("a=%d\t", a); displayBits(a);
    return 0;
}