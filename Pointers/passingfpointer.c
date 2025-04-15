#include <stdio.h>
// Function pointer 
typedef int (*fptrOperation)(int, int);

// Function definitions
int add(int a, int b) 
{
    return a + b;
}
int subtract(int a, int b) 
{
    return a - b;
}
int multiply(int a, int b) 
{
    return a * b;
}
// Common function that uses function pointer
int compute(fptrOperation Operation , int a, int b) 
{
    return Operation(a, b); 
}

int main() 
{
    printf("Addition: %d\n", compute(add, 35, 24));           // here perform addition
    printf("Subtraction: %d\n", compute(subtract, 40, 20));   // subtraction
    printf("Multiplication: %d\n", compute(multiply, 25, 15));  // multiplication
    return 0;
}
