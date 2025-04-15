/*print the address and characters of a string using pointer*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="india";
    char *p;
    p=str;
    while(*p!='\0')
    {
        printf("Character=%c\t", *p);
        printf("Address= %p\n", p);
        p++;
    }
    return 0;
}