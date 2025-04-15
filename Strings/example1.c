#include <string.h>
#include <stdio.h>

int main() 
{
    char str[20], ch;
    int i = 0;

    printf("Enter some characters:\n");
    ch = getchar();  // Read the first character

    // Keep reading characters until newline is encountered
    while (ch != '\n') 
    {
        str[i] = ch;     // Store character in the array
        i++;             // Move to next position
        ch = getchar();  // Read next character
    }
    str[i] = '\0';  // Terminate the string with null character

    printf("\nThe string is:\n");
    i = 0;
    while (str[i] != '\0')      // Print the string character by character
    {
        putchar(str[i]);
        i++;
    }
    printf("\n");  // New line at the end
}
