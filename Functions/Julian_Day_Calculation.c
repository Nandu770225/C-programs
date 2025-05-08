// Julian Day Calculation program that calculates the day-of-year (1 to 365/366) for any valid date
#include<stdio.h>

// Function to check if a year is a leap year
int isLeap(int year) 
{
    return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}
// Function to calculate Julian day (day-of-year)
int julianDay(int day, int month, int year) 
{
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int jd = day;
    // Adjust February for leap years
    if (isLeap(year)) daysInMonth[1] = 29;
    // Add days from previous months
    for (int m = 0; m < month - 1; m++) 
    {
        jd += daysInMonth[m];
    }
    return jd;
}
int main() 
{
    int d, m, y;
    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &d, &m, &y);
     // Basic date validation
    if (m < 1 || m > 12 || d < 1 || d > 31) 
    {
        printf("Invalid date!\n");
        return 1;
    }
    printf("Julian day: %d\n", julianDay(d, m, y));
    return 0;
}