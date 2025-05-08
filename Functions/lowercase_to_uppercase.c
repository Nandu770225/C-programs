#include<stdio.h>
#include<ctype.h>

char toUpperCase(char ch) 
{
    return (ch >= 'a' && ch <= 'z') ? ch - 32 : ch;
}
int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Converted character: %c\n", toUpperCase(ch));
    return 0;
}