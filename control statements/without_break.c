#include<stdio.h>

int main() 
{
    // Print numbers 1 to 10 but skip 5 (without using 'break')
    for (int i = 1; i <= 10; i++) 
    {
        if (i != 5)   // Explicit condition to skip 5
        {  
            printf("%d ", i);
        }
    }
    return 0;
}