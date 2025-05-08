// write a function that inputs a number and prints the multiplication table of that number.
#include<stdio.h>

void printMultiplicationTable(int num);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printMultiplicationTable(number);
    return 0;
}
void printMultiplicationTable(int num)
{
    int i;
    printf("Multiplication table of %d:\n", num);
    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
}