// write a function cmpDate() to compare two dates.
#include<stdio.h>

int cmpDate(int d1, int m1, int y1, int d2, int m2, int y2) 
{
    if(y1 != y2) return y1 < y2 ? 1 : -1;
    if(m1 != m2) return m1 < m2 ? 1 : -1;
    if(d1 != d2) return d1 < d2 ? 1 : -1;
    return 0;
}
int main() 
{
    int d1, m1, y1, d2, m2, y2;
    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &d1, &m1, &y1);
    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d", &d2, &m2, &y2);
    
    int result = cmpDate(d1, m1, y1, d2, m2, y2);
    printf("Comparison result: %d\n", result);
    return 0;
}