#include<stdio.h>

int main()
{
    int i=1;
    while(i++ < 5)       // Condition checked before increment
        printf("%d ",i); 
    printf("\n");
    
    i=1;
    while(i++ < 5)       
        printf("%d ",i); 
    printf("\n");
    
    i=6;
    while(i--)           // Decrements after condition check
        printf("%d ",i); 
    return 0;
}