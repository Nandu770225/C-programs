#include<stdio.h>

int main()
{
    char str[15];
    int i = 0;
    while (i < 5)
    {
        printf("Enter date%d:", i + 1);
        scanf("%s", str[i]);
        i++;
    }
    i = 0;
    while (i < 5)
    {
        printf("%s\n", str[i]);
        i++;
    }
    return 0;
}