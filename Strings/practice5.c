#include<string.h>
#include<stdio.h>

int main()
{
    char colour[] = "blue";
    int i = 0;

    while (colour[i] != '\0')
    {
        printf("%c", colour[i]);
        i++;
    }
}
