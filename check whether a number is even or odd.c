#include<stdio.h>

int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    if (num % 2)                            // using the modulus operator (%)
    {                                       // If num % 2 == 0 - Number is divisible by 2 - Even
        printf("it is odd= %d/n", num);     // If num % 2 != 0 - Number is not divisible by 2 -Odd 
    }
    else
    {                                            //And also using Bitwise AND (&) Operator
        printf("it is even= %d/n", num);
    }
    return 0;
    
}