#include<stdio.h>
#include<string.h>

int main()
{
    char str1[10], str2[10];              // Declares two character arrays (strings)
    
    printf("Enter two strings: ");        
    gets(str1);                           // Reads first string 
    gets(str2);                           // Reads second string

    if ((strcmp(str1, str2)) == 0)        // Compares both strings using strcmp()
        printf("Strings are same\n");     
    else
        printf("Strings are not same\n"); 

    return 0;
}
