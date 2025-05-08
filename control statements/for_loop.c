#include<stdio.h>

int main() 
{
    int num = 5; 
    int factorial = 1;

    // For loop to calculate factorial
    for (int i = 1; i <= num; i++) 
    {
        factorial *= i;  // Multiply factorial by i in each iteration
    }
    printf("%d! = %d\n", num, factorial);  
    return 0;
}