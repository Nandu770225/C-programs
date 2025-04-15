#include<stdio.h>
int factorial(int number);
int main()
{
    int num;
    printf("Enter the factorial number:");
    scanf("%d",&num);
    factorial(num);
    return 0;
}
int factorial(int number)
{
    int fact=1;
    for(int i=1;i<=number;i++)
    {
        fact*=i;
    }
    printf("Factorial of a %d is %d",number,fact);
    return 0;
}