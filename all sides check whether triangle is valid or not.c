#include<stdio.h>

int main() 
{
    int a, b, c;

    printf("Enter the three sides of the triangle");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b)                // A triangle is valid if the sum of any two sides is greater than the third side
    {                                                       // If all three conditions are true - Triangle is valid
        printf("The triangle is valid\n");                  // If any condition is false - Triangle is not valid
    } 
    else 
    {
        printf("The triangle is NOT valid\n");
    }

    return 0;
}
