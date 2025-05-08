#include<stdio.h>

int main() 
{
    printf("Prime numbers between 1 and 99:\n");
    for(int i = 2; i <= 99; i++) 
    {
        int isPrime = 1;
        for(int j = 2; j * j <= i; j++) 
        {
            if(i % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) 
        {
            printf("%d ", i);
        }
    }
    return 0;
}