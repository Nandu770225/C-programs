#include<stdio.h>

void displayBits(int x)
{
    for (int i = 31; i >= 0; i--)
    printf("%d", (x >> i) & 1);
    printf("\n");
}
int main()
{
    int a, bit, mask, bitposition;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter the bitposition: ");
    scanf("%d", &bitposition);
    mask = 1 << bitposition;
    printf("a=%d\n", a);
    displayBits(a);
    if ((a & mask) == 0)
        bit=0;
    else
       bit=1;
    printf("The bit at position %d is %d\n", bitposition, bit);
    return 0;
} 