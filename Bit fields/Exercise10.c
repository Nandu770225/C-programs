#include<stdio.h>

int main()
{
    func(0x1AE3);
}
void func(int x)
{
    int i,mask;
    mask=1<<31;
    for(i=1;i<=32;i++)
    {
        putchar((x&mask)?'1' : '0');
        x<<=1;
        if(i%8==0)
        putchar(' ');
    }
    printf("\n");      // Compilation error will occur
    return 0;
}
