#include<stdio.h>

#define toupper(c)\
((c)>='a'   && (c)<='z'  ? (c) +  ('A'-'a'):(c))
int main()
{
    char str[]="NanduReddy",*p;
    p=str;
    while(*p!='\0')
    printf("%c",*p++);
    printf("\n");
    p=str;
    while(*p!='\0')
    printf("%c",toupper(*p+1));
    return 0;
}
