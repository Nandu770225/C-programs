#include <string.h>
#include <stdio.h>

 main() 
{
    char str[20] = "hello";
    int i = 0;

    while (str[i] != '\0') 
    {
        putchar(str[i]);
        i++;
    }
    printf("\n");
}
