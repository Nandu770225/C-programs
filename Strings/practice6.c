#include <string.h>
#include <stdio.h>

int main()
{
    char *color = "blue";

    while (*color != '\0')
    {
        putchar(*color);  
        color++;
    }
}
