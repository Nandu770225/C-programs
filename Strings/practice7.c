#include <stdio.h> 
#include <string.h>   
#include <ctype.h>    // Needed for isdigit() function    

int main()
{
    char c;  
    printf("Enter a character: ");  

    scanf("%c", &c);  // Alternative: c = getchar(); // (also reads one character)

    // Check if the character is a digit (0-9)
    if (isdigit(c))
        printf("%c is a digit:\n", c);  // If true, print digit message
    else
        printf("%c is not a digit:\n", c);  // If false, print non-digit message
}
