#include <stdio.h>

void printFibonacci(int n) 
{
    int t1 = 0, t2 = 1;
    int nextTerm;
    
    printf("Fibonacci Series");
                                                              // function definition
    for (int i = 1; i <= n; i++) 
    {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
    printf("\n");
}

int main() 
{
    int n;
    
    printf("Enter the number of terms");
    scanf("%d", &n);
    
    if (n <= 0) 
    {
        printf("Please enter a positive number\n");
    } else 
    {
        printFibonacci(n);                                        // Function call
    }
    
    return 0;
}
