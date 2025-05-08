#include<stdio.h>

int main() 
{
    int num, a = 0, b = 1, c;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num == 0 || num == 1) 
    {
        printf("%d is a Fibonacci number\n", num);
        return 0;
    }
    c = a + b;
    while(c < num) 
    {
        a = b;
        b = c;
        c = a + b;
    }
    if(c == num) 
    {
        printf("%d is a Fibonacci number\n", num);
    }
    else 
    {
        printf("%d is not a Fibonacci number\n", num);
    }
    return 0;
}