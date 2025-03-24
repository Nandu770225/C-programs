#include <stdio.h>

int main() 
{
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);                                            //The || operator (logical OR) combines the two conditions
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
    {                                                             // If either condition is true, the whole expression evaluates to true, meaning the character is an alphabet.
        printf("%c is an alphabet.\n", ch);                       // If both are false, the character is not an alphabet.
    } 
    else 
    {
        printf("%c is not an alphabet.\n", ch);
    }
    
    return 0;
}
