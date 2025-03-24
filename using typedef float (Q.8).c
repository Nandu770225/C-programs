#include <stdio.h>

typedef float myFloat;

int main() 
{
    myFloat a = 5.5, b;
    printf("%.1f", (a + 1.5), (b = a + 2.5));
    printf(" %.1f", b);
    return 0;
}
