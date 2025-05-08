#include <stdio.h>

int toggleIthBit(int x, int i) 
{
    return x ^ (1 << i);  // XOR with a mask that has a 1 at the i-th bit position
}
int main() 
{
    int x = 25;  // Example number: 29 is 11101 in binary
    int i = 3;   // Toggle the 3rd bit (0-based index)

    int result = toggleIthBit(x, i);
    printf("Original number: %d\n", x);
    printf("Number after toggling bit %d: %d\n", i, result);
    return 0;
}
