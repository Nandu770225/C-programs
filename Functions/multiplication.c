#include<stdio.h>

void mul(int number);  

int main()
{
    int num;
    printf("Enter the table number: ");
    
    if (scanf("%d", &num) != 1) {  // Input validation
        printf("Invalid input!\n");
        return 1;
    }
    
    mul(num);
    return 0;
}

void mul(int number) 
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", number, i, (number * i));
    }
}