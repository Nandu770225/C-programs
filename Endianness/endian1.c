#include<stdio.h>
#define LITTLE_ENDIAN 0   
#define BIG_ENDIAN    1

int endian() 
{
    unsigned int x = 1;         
    char *p = (char *)&x;       // Typecast the address of x to a char pointer

    if (*p)                     // If the first byte is 1
        return LITTLE_ENDIAN;  // It’s little endian
    else
        return BIG_ENDIAN;     // Otherwise, it’s big endian
}
int main() 
{
    if (endian() == LITTLE_ENDIAN)
        printf("System is Little Endian\n");
    else
        printf("System is Big Endian\n");

    return 0;
}
