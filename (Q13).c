#include<stdio.h>

int main()
{
    int a = 1;
    int b = 0;
    b = a++ + a++; 
    printf("%d %d", a, b);               // First a++ → used 1, then incremented to 2; second a++ → used 2, then increment to 3   ,a become 3                            printf("%d %d", a, b);
    return 0;                            // sum of 1+2  then b= 3
}