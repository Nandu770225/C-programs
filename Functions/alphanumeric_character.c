// write a function to find whether a character is alphanumeric or not.
#include<stdio.h>
#include<ctype.h>

int isAlphanumeric(char ch) 
{
    return isalpha(ch) || isdigit(ch);
}
int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(isAlphanumeric(ch))
        printf("'%c' is alphanumeric\n", ch);
    else
        printf("'%c' is not alphanumeric\n", ch);
    return 0;
}