// Write a program to abbreviate input text.For example if the input is "World Health Organization"-
// then the output should be WHO.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void abbreviate(char *str) 
{
    char abbr[10] = {0}; // To store abbreviation
    int abbrIndex = 0;
    int i = 0;
    while (str[i]) 
    {
        if (i == 0 || isspace((unsigned char)str[i-1])) 
        {
        abbr[abbrIndex++] = toupper((unsigned char)str[i]);
        }
        i++;
    }
    abbr[abbrIndex] = '\0';
    strcpy(str, abbr); // Replace original string with abbreviation
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    abbreviate(str);
    printf("Abbreviation: %s\n", str);
    return 0;
}