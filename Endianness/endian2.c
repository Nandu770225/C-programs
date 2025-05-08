#include <stdio.h>
#define is_bigendian() ( (*(char*)&i) )

const int i = 1;

int main() 
{
    unsigned int val = 0x12345678; 
    char *ptr;
    ptr = (char *)&val;  
    if (is_bigendian()) 
    {
        printf("%X.%X.%X.%X\n", ptr[0], ptr[1], ptr[2], ptr[3]);
        printf("big endian\n");
    } 
    else 
    {
        printf("%X.%X.%X.%X\n", ptr[3], ptr[2], ptr[1], ptr[0]);
        printf("little endian\n");
    }
    return 0;
}
