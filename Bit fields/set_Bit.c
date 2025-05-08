#include<stdio.h>

int setBit(int num, int i) 
{
    return num | (1 << i);
}
int main()
{
    int num, i;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the bit position to set (0-31): ");
    scanf("%d", &i);

    num = setBit(num, i);
    printf("Result after setting the %dth bit: %d\n", i, num);
    return 0;
}
