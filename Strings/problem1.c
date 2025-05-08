// write a program to enter a string and print it in reverse order.
#include<stdio.h>    
#include<string.h>   // For string functions like strlen()

int main(void)
{
    char str[50];     
    int len;          

    printf("Enter a string: ");
    gets(str);        // Read a string from user input (Note: gets() is unsafe, better to use fgets())

    // Loop to print the string in reverse order
    for(len = strlen(str) - 1; len >= 0; len--)
    {
        printf("%c", str[len]);   
    }
    return 0;
}
