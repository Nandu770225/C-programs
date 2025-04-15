// Returning function pointer
#include<stdio.h>
// function pointer 
typedef int (*fptrOperation)(int, int);

int add(int a, int b) 
{
    return a + b;
}
int subtract(int a, int b) 
{
    return a - b;
}
fptrOperation select(char opcode) 
{
    if (opcode == '+')
        return add;
    else                  
        return subtract;
}
int evaluate(char opcode, int num1, int num2) 
{
    fptrOperation operation = select(opcode);  
    return operation(num1, num2);    
}
int main() 
{
    printf("%d\n", evaluate('+', 5, 6));  // Output: 11
    printf("%d\n", evaluate('-', 5, 6));  // Output: -1
    return 0;
}
