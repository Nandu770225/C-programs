#include<stdio.h>

int main()
{
    unsigned int num=0xA01D,pos=3,bit;
    unsigned int mask=1<<pos;
    bit=(num&mask)>>pos;
    printf("%u\n",bit);
    return 0;
}
