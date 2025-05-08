// Write a function to replace adjacent multiple spaces in a string by a single space.
#include<stdio.h>
#include<string.h>
#include<ctype.h> 

void replaceSpaces(char *str) 
{
    int i, j;
    for (i = 0, j = 0; str[i]; i++) 
    {
        str[j] = str[i];
        if (isspace((unsigned char)str[i]) && i + 1 < strlen(str) && isspace((unsigned char)str[i + 1])) 
        {
            continue; 
        }
        j++;
    }
    str[j] = '\0'; 
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    replaceSpaces(str);
    printf("String with single spaces: %s\n", str);
    return 0;
}