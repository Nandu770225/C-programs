// write a function prodDigits() that inputs a number and returns the product of digits of that number.
#include<stdio.h>

int prodDigits(int num);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Product of digits: %d\n", prodDigits(number));
    return 0;
}
int prodDigits(int num)
{
    int product = 1, digit;
    while(num != 0)
    {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }
    return product;
}