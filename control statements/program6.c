#include<stdio.h>

int main()
{
    int i=1;
    for( ; ; )          
    {
        if(i++==3)      // Increments i and checks if it equals 3
            break;      // Breaks when i reaches 3
    }
    printf("%d ",i);    
    
    i=1;
    while(1)            
    {
        if(i++==3)      // Increments i and checks if it equals 3
            break;      // Breaks when i reaches 3
    }
    printf("%d ",i);    
    return 0;
}