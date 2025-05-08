#include<stdio.h>
#include<math.h>  

int isprime(int n);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(isprime(num))
        printf("Number is prime\n");
    else
        printf("Number is not prime\n");
    return 0;
}
int isprime(int n)
{
    // Handle edge cases
    if(n <= 1)
        return 0;
    if(n == 2)
        return 1;
    if(n % 2 == 0)
        return 0;
    
    // Check divisors up to square root of n
    for(int i = 3; i <= sqrt(n); i += 2)  // Only check odd numbers
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}