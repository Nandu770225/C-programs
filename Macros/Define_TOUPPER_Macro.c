#include<stdio.h>
#include<ctype.h>  // For standard character handling functions
#define TOUPPER(c) ((c) >= 'a' && (c) <= 'z' ? (c) - ('a' - 'A') : (c))
/*
 * Macro to convert lowercase letters to uppercase
 * Leaves non-lowercase characters unchanged
 * How it works:
 * 1. Checks if character is lowercase 
 * 2. If true, converts to uppercase by adjusting ASCII value
 * 3. If false, returns character unchanged
 */
int main() 
{
    // Test cases
    printf("'a' -> '%c'\n", TOUPPER('a'));  // 'A'
    printf("'z' -> '%c'\n", TOUPPER('z'));  // 'Z'
    printf("'A' -> '%c'\n", TOUPPER('A'));  // 'A' (unchanged)
    printf("'@' -> '%c'\n", TOUPPER('@'));  // '@' (unchanged)
    printf("' ' -> '%c'\n", TOUPPER(' '));  // ' ' (unchanged)
    
    char input = 'g';
    printf("Before: '%c', After: '%c'\n", input, TOUPPER(input));
    return 0;
}