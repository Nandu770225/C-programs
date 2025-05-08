#include<stdio.h>

int reverse(int n);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed number: %d\n", reverse(num));
    return 0;
}
int reverse(int n)
{
    int rev = 0; 

    do
    {
        // Move current digits left and add last digit of n
        rev = rev * 10 + n % 10;
        
        // Remove the last digit from n
        n /= 10;
        
    }while(n > 0); // Continue until no digits left
    return rev;
}