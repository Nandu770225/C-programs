#include<stdio.h>

int main() 
{
    int num, i;
    printf("Enter a number");
    scanf("%d", &num);

    if (num <= 1) 
    {
        printf("%d is not a prime number\n", num);
        return 0;
    }

    for (i = 2; i < num; i++) 
    {
        if (num % i == 0)                               // % Modulus operator returns the remainder after division
        {                                               // If the remainder is 0, it means num is divisible by i
            printf("%d is not a prime number\n", num);   
            return 0;                                     // num = 10
        }                                                 // Loop starts at i = 2
    }                                                     // 10 % 2 = 0 -> Divisible -> Not prime

    printf("%d is a prime number\n", num);

    return 0;
}
