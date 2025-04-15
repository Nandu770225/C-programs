#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[50];  // Buffer to store input string
    int len;       // Length counter
    
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);  
    str[strcspn(str, "\n")] = '\0';
    
    printf("Reversed string: ");
    for(len = strlen(str)-1; len >= 0; len--)
        printf("%c", str[len]);  // Print each character backward
    
    printf("\n");
    return 0;
}