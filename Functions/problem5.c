#include<stdio.h>

long int binary(int num);
int main()
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    if(num < 0) 
    {
        printf("Error: Negative numbers not supported.\n");
        return 1;
    }
    printf("Decimal = %d, Binary = %ld\n", num, binary(num));
    return 0;
}
long int binary(int num)
{
    long int place_value = 1;  
    long int binary_result = 0;
    int remainder;
    
    // Special case for 0
    if(num == 0) 
    {
        return 0;
    }
    while(num > 0)
    {
        remainder = num % 2;      // Get least significant bit
        binary_result += remainder * place_value;  // Add to binary result
        num /= 2;                 // Remove processed bit
        place_value *= 10;        // Move to next binary digit place
    }
    return binary_result;
}