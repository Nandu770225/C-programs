#include<stdio.h>
#include<string.h>
#define SIZE 21

char target[SIZE] = "a shiny white sphere";

int main()
{
    char *p = target + 8;      
    char *source = target + 2;  
    
    printf("Before memmove, target is \"%s\"\n", target);
    memmove(p, source, 5);
    printf("After memmove, target becomes \"%s\"\n", target);
    return 0;

}