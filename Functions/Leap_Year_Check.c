// write a function isLeap() which input a year and returns 1 if the year is leap otherwise 0.
#include<stdio.h>

int isLeap(int year) 
{
    return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}
int main() 
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("%d is %sa leap year\n", year, isLeap(year) ? "" : "not ");
    return 0;
}