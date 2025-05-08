#include<stdio.h>

int main()
{
    int i;
    for(i=1; i<5; i++);  
    printf("%d ",i);     // Prints 5 (loop runs until i=5)
    
    i=10;
    while(i<5);          // Infinite loop if condition was true, but it's false (10<5 is false)
    printf("%d ",i++);   // Prints 10 then increments to 11
    
    i=0;
    while(i<5);          
    printf("%d",i++);
    return 0;    
}