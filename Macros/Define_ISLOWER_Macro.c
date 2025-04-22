#include <stdio.h>
#define ISLOWER(c) ((c) >= 'a' && (c) <= 'z')
/*
 * Macro to check if a character is lowercase
 * Returns 1 (true) if character is between 'a' and 'z'
 * Returns 0 (false) otherwise
 */
int main() 
{
    printf("'a' is lowercase: %d\n", ISLOWER('a'));  // 1 (true)
    printf("'Z' is lowercase: %d\n", ISLOWER('Z'));  // 0 (false)
    printf("'@' is lowercase: %d\n", ISLOWER('@'));  // 0 (false)
    
    char input = 'h';
    if (ISLOWER(input)) 
    {
        printf("'%c' is lowercase\n", input);
    } 
    else 
    {
        printf("'%c' is not lowercase\n", input);
    }
    
    return 0;
}