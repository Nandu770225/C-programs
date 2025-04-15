#include<stdio.h>
void findFactors(int num) 
{
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() 
{
    int num;
    
    printf("Enter a number");
    scanf("%d", &num);
    
    if (num <= 0) 
    {
        printf("Please enter a positive number\n");
    } else {
        findFactors(num);
    }
    
    return 0;
}
