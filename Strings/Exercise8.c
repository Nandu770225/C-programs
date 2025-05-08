#include<stdio.h>
#include<string.h>

int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = 0;
    printf("String without newline: %s\n", str);
    return 0;
}