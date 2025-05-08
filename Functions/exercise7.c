#include <stdio.h>

void func(int i);  

int main()
{
    int i = 5;
    for(i = i + 1; i < 8; i++) 
    {
        func(i);  // Pass current i to func
    }
    return 0;
}
void func(int i)  
{
    int j;
    for(j = i; j < i + 3; j++) 
    {  
        printf("%d\n", j + 1);  
    }
}