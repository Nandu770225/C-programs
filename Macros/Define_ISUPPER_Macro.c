#include<stdio.h>
#define ISUPPER(c) ((c) >= 'A' && (c) <= 'Z')
/*
 * Macro to check if a character is uppercase
 * Returns: 
 *   - 1 (true) if character is between 'A' and 'Z'
 *   - 0 (false) otherwise 
 * Why use character literals ('A') instead of ASCII values (65)?
 * - More readable and portable
 * - Works with any character encoding (not just ASCII)
 */
int main() 
{
    printf("Is 'A' uppercase? %d\n", ISUPPER('A'));  
    printf("Is 'z' uppercase? %d\n", ISUPPER('z'));  
    printf("Is '@' uppercase? %d\n", ISUPPER('@'));  
    
    char input = 'G';  // Example with variable
    if (ISUPPER(input)) 
    {
        printf("'%c' is uppercase\n", input);
    } 
    else 
    {
        printf("'%c' is not uppercase\n", input);
    }
    return 0;
}