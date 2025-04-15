#include <stdio.h>

// Function returns a pointer to a string literal based on integer code
char* returnALiteral(int code) {
    switch(code) {
        case 1:
            return "I know everything, So, I don't want know anything";
        case 2:
            return "I know everything, Even though I want to learn everything";
        case 3:
            return "I don’t know anything, So, I don’t want know to anything";
        case 4:
            return "I don’t know anything, So, I want know to anything";
        default:
            return "I am not a human, even though animal";
    }
}
int main() 
{
    // Test the function with different codes
    for (int i = 1; i <= 5; i++) 
    {
        printf("Code %d: %s\n", i, returnALiteral(i));
    }
    return 0;
}
