#include <stdio.h>
#include <stdlib.h>  

// Function that returns a string of blank spaces
char* blanks(int number) 
{
    char* spaces = (char*)malloc(number + 1);
    int i;
    // Fill the string with spaces
    for (i = 0; i < number; i++) 
    {
        spaces[i] = ' ';
    }

    // Null-terminate the string
    spaces[number] = '\0';

    return spaces;  
}
int main() 
{
    // Case 1: Direct usage (not ideal — leads to memory leak)
    printf("[%s]\n", blanks(5));  // Will print: [     ]

    // Case 2: Better approach — store pointer and free it
    char *tmp = blanks(5);
    printf("[%s]\n", tmp);  // Will print: [     ]
    free(tmp);              // Free allocated memory to prevent memory leaks

    return 0;
}
