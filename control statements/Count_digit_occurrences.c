#include<stdio.h>

int main() 
{
    int number, digit, count = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter digit to count: ");
    scanf("%d", &digit);
    
    temp = (number < 0) ? -number : number; // Handle negative numbers
    
    do 
    {
        if(temp % 10 == digit) 
        {
            count++;
        }
        temp /= 10;
    } while(temp != 0);
    
    printf("Digit %d appears %d times\n", digit, count);
    return 0;
}