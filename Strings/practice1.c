#include<stdio.h>
#include<string.h>
int main()
{
    char line[81];
    printf("enter the characters \n");
    scanf("%[A-Z]", line);        // read a string containing uppercase characters
    printf("the complete line of text is :%s",line);
    return 0;
}