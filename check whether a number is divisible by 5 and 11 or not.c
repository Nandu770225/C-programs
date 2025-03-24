#include<stdio.h>

int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 11 == 0)
    {
        printf("it is divisible by both 5 and 11 %d/n", num);
    }
    else
    {
        printf("it is not divisible by both 5 and 11 %d/n", num);
    }
    return 0;
}