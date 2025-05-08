// printing all prime numbers between two given numbers:
#include<stdio.h>
#include<math.h>  

int isprime(int n);
void printPrimes(int num1, int num2);

int main()
{
    int num1, num2; 
    printf("Enter two numbers (separated by space): ");
    scanf("%d %d", &num1, &num2);
    
    // Ensure num1 is smaller than num2
    if(num1 > num2) 
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    printf("Prime numbers between %d and %d are: ", num1, num2);
    printPrimes(num1, num2);
    return 0;
}
void printPrimes(int num1, int num2)
{
    int i;
    for(i = num1; i <= num2; i++) 
    {
        if(isprime(i)) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");  
}
int isprime(int n)
{
    if(n <= 1) return 0;  // Numbers <= 1 are not prime
    if(n == 2) return 1;  // 2 is prime
    if(n % 2 == 0) return 0;  // Even numbers > 2 are not prime
    
    // Check odd divisors up to square root of n
    for(int i = 3; i <= sqrt(n); i += 2) 
    {
        if(n % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}