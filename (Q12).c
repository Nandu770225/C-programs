#include <stdio.h>

int main() 
{
    int a = 1;
    int b = 1;
    int c = a || ++b;                                          // The ||--Logical OR operator checks if at least one operand is true.If the first operand is true, it does NOT evaluate the second operand.
    int d = a-- && b++;                                        // &&-- Logical AND operator checks if both operands are true.
    printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);      // If the first operand is false, the second operand is NOT evaluated.
    return 0;                                                  // If the first operand is true, it evaluates the second operand.
}
