#include<stdio.h>

int sum(int, int);                              // Function declaration

int main()
{
    int x, y, r;
    printf("Enter the values");
    scanf("%d %d", &x, &y); 

    r = sum(x, y);                             // Function Call
    printf("\n r = %d", r);                    // The returned value from sum is stored in r.

    return 0;
}

int sum(int a, int b)                          // Function Definition
{
    printf("\n a = %d, b = %d", a, b);
    return a + b;                              // Here returns the sum of a and b to the calling function (main).
}
