#include <stdio.h>

int square1(int a);
int square2(double a);
double square3(int a);
double square4(double a);

int main()
{
    double x = 2.5;
    double y;  
    
    y = square1((int)x);  
    printf("%lf\n", y);
    y = square2(x);
    printf("%lf\n", y);
    y = square3((int)x); 
    printf("%lf\n", y);
    y = square4(x);
    printf("%lf\n", y); 
    return 0;
}
int square1(int a)
{
    return a * a;
}
int square2(double a)
{
    return (int)(a * a);  
}
double square3(int a)
{
    return (double)(a * a);  
}
double square4(double a)
{
    return a * a;
}