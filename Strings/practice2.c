/* print characters of a string and address of each character*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="india";
    int i;
    for (i=0; str[i]!='\0'; i++)
    {
        printf("Character=%c\t", str[i]);
        printf("Address= %p\n", &str[i]);
    }
    return 0;
}