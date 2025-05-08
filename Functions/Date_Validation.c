// write a function isValid() to find whether a date is valid.
#include<stdio.h>

// Function to check if a year is a leap year
int isLeap(int year) 
{
    if (year % 400 == 0) return 1;
    if (year % 100 == 0) return 0;
    if (year % 4 == 0) return 1;
    return 0;
}
// Function to validate a date (DD/MM/YYYY)
int isValid(int d, int m, int y) {
    if (y < 1 || m < 1 || m > 12 || d < 1) return 0;
    
    int maxDays;
    if (m == 2)
        maxDays = isLeap(y) ? 29 : 28;
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        maxDays = 30;
    else
        maxDays = 31;
    
    return (d <= maxDays);
}
int main() 
{
    int d, m, y;
    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &d, &m, &y);
    printf("Date is %svalid\n", isValid(d, m, y) ? "" : "not ");
    return 0;
}