#include <stdio.h>

int isArmstrong(int num) 
{
    int originalNum = num;                      // Store original number
    int sum = 0;
    int digit;
    
    while (num != 0) 
    {
        digit = num % 10;                          // Get the last digit
        sum += digit * digit * digit;                       // Cube the digit and add to sum
        num = num / 10;                              // Remove the last digit
    }
    if (sum == originalNum)                   // // Check if sum equals original number
        return 1;
    else
        return 0;
}

int main() 
{
    int num;
    
    printf("Enter a number");
    scanf("%d", &num);                                       // Read input from user
    
    if (isArmstrong(num))         // // Function call
    {                                   
        printf("%d is an Armstrong number.\n", num);
    } 
    else 
    {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}
