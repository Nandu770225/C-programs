// Write a function to convert a string into uppercase.
#include<stdio.h>
#include<ctype.h>

void toUppercase(char *str) 
{
    // Convert each character to uppercase
    while (*str) 
    {   
    *str = toupper(*str);
    str++;
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    toUppercase(str);
    printf("Uppercase string: %s", str);
    return 0;
}