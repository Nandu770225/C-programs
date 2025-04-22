#include <stdio.h>
#define CALCULATE(a, b) { \
    int sum = (a) + (b); \
    int difference = (a) - (b); \
    printf("Numbers: %d and %d\n", (a), (b)); \
    printf("Sum: %d\n", sum); \
    printf("Difference: %d\n", difference); \
}
int main() 
{
    printf("Calculation 1:\n");
    CALCULATE(10, 4);
    
    printf("\nCalculation 2:\n");
    CALCULATE(25, 13);
    
    return 0;
}