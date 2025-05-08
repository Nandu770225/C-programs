#include<stdio.h>

int main() 
{
    int x, y, result = 1;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);
    
    for(int i = 0; i < y; i++) 
    {
        result *= x;
    }
    printf("%d^%d = %d\n", x, y, result);
    return 0;
}