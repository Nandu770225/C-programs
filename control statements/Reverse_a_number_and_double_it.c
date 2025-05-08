#include <stdio.h>

int main() 
{
    int num, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int original = num;
    while(num > 0) 
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number: %d\n", reverse);
    printf("Double of reversed: %d\n", 2 * reverse);
    return 0;
}