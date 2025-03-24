#include<stdio.h>

int main()
{
    int num1,num2;
    printf("enter two numbers:");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        printf("maximum= %d/n", num1);
    }
    else
    {
        printf("maximun= %d/n", num2);
    }
    return 0;
}