#include<stdio.h>

int convertToDecimal(int n, int base);
int main()
{
    int num, base, result;
    char choice;
    
    printf("Enter 'b' for binary or 'o' for octal: ");
    scanf(" %c", &choice);  // Note the space before %c to consume any leftover newline
    printf("Enter a number: ");
    scanf("%d", &num);
    
    base = (choice == 'b') ? 2 : 8;
    
    if(base == 2) 
    { 
        int temp = num;
        while(temp > 0) 
        {
            if(temp % 10 > 1) 
            {
                printf("Error: Invalid binary number!\n");
                return 1;
            }
            temp /= 10;
        }
    }
    result = convertToDecimal(num, base);
    printf("Decimal equivalent is: %d\n", result);
    return 0;
}
int convertToDecimal(int n, int base)
{
    int rem, decimal = 0;
    int position = 1; 
    
    while(n > 0)
    {
        rem = n % 10;          
        decimal += rem * position;
        position *= base;      
        n /= 10;              
    }
    return decimal;
}