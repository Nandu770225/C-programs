#include<stdio.h>

int main() 
{
    int m1, m2, m3, m4, m5;
    float total, percentage;

    printf("Enter marks of 5 subjects: ");    // Input marks of 5 subjects
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;  // Calculate total and percentage
    percentage = (total / 500) * 100;

    printf("Total Marks = %.0f\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}
