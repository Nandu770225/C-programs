#include <stdio.h>
#include <string.h>
#include <ctype.h>  

int main()
{
    char line[81];  // Array to store the input line
    int i, n, count = 0;

    scanf("%[^\n]", line);  // Reads the entire line including spaces until newline

    n = strlen(line);  // Get the length of the input string

    for (i = 0; i < n; i++)
    {
        if (isupper(line[i]))  // Check if the character is uppercase
            count++;           // Increment count if uppercase
    }
    printf("\nThe no. of uppercase letters in the string \"%s\" is %d\n", line, count);
    return 0;
}
