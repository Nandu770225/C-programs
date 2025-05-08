// checking palindrome numbers using the reverse() function
#include<stdio.h>

long int reverse(long int n);
int isPalindrome(long int num);

int main() 
{
    long int num;
    printf("Enter a number: ");
    scanf("%ld", &num);
    
    if(isPalindrome(num))
        printf("Number is a palindrome\n");
    else
        printf("Number is not a palindrome\n");
    
    return 0;
}
int isPalindrome(long int num) 
{
    // Compare number with its reverse
    return (num == reverse(num));
}
long int reverse(long int n) 
{
    long int rev = 0;
    
    do 
    {
        rev = rev * 10 + n % 10;  // Corrected from rev + 10 to rev * 10
        n /= 10;
    } while(n > 0);
    return rev;
}