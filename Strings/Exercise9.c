// Write a function to remove all leading and trailing blanks from a string.
#include<stdio.h>
#include<string.h>
#include<ctype.h> 

void trimBlanks(char *str) 
{
    char *start = str, *end = str + strlen(str) - 1;
    while (isspace((unsigned char)*start)) start++;
    while (end > start && isspace((unsigned char)*end)) end--;
    // Shift characters to the beginning of the string
    char *dest = str;
    while (start <= end) 
    {
        *dest++ = *start++;
    }
    *dest = '\0'; 
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    trimBlanks(str);
    printf("Trimmed string: %s\n", str);
    return 0;
}