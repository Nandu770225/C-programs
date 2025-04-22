#include<stdio.h>
#define SQUARE(x) ((x) * (x))
/*
 * Macro to calculate the square of a number
 * Why use parentheses around 'x'?
 * - Prevents operator precedence issues (e.g: SQUARE(2+3) becomes (2+3)*(2+3) = 25)
 * - Without them: 2+3*2+3 = 2+6+3 = 11 (this is wrong)
 */
int main() 
{
    // Example 1: Simple number
    int num = 5;
    printf("Square of %d is %d\n", num, SQUARE(num));  // 5*5 = 25
    
    // Example 2: Expression
    printf("Square of (3+2) is %d\n", SQUARE(3+2));   // (3+2)*(3+2) = 25
    
    // Example 3: Floating point
    float f = 2.5f;
    printf("Square of %.2f is %.2f\n", f, SQUARE(f)); // 2.5*2.5 = 6.25
    return 0;
}