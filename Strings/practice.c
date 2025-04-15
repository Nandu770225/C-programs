#include<stdio.h>
#include<string.h>
int main()
{
    char line[81];
    printf("enter the characters \n");
    scanf("%[^\n]", line);         // reads a string containing any character
    printf("the complete line of text is :%s",line);
    return 0;
}