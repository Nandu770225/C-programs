#include<stdio.h>

int main() 
{
    printf("All 4-digit palindromes:\n");
    for(int i = 1000; i <= 9999; i++) 
    {
        if(i / 1000 == i % 10 && (i / 100) % 10 == (i / 10) % 10) 
        {
            printf("%d ", i);
        }
    }
    return 0;
}