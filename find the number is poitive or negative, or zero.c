#include<stdio.h>

int main()
{
    int num;
    printf(" enter a number");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("it is a positive= %d/n", num);
    }
    else if (num < 0)
    {
        printf("it is a negative= %d/n", num);
    }
    else
    {
        printf(" it is a zero= %d/n", num);
    }
    return 0;
}