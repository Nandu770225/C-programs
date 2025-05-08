#include<stdio.h>

int main()
{
    unsigned int x,y,z;
    displaybits(0xFFFF);
    x=y=z=0xFFFF;
    x=(x>>5)<<5;   displaybits(x);
    x=(y>>3)<<3;   displaybits(y);
    x=(z>>2)<<2;   displaybits(z);
    return 0;
}
