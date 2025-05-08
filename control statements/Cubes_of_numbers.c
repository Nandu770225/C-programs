#include<stdio.h>

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Cubes of numbers divisible by 3 from 1 to %d:\n", n);
    for(int i = 1; i <= n; i++) 
    {
        if(i % 3 != 0) 
        {
            continue;
        }
        printf("%d^3 = %d\n", i, i * i * i);
    }
    return 0;
}