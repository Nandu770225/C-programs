// P10.35 Program to delete all occurrences of a character from a string 

#include<stdio.h>
#include<string.h>

void del_char(char *str, char ch); // Function prototype

int main()
{
    char str[50] = "Data Structures through C in depth"; 
    del_char(str, 'u'); // Call function to delete character 'u'
    puts(str); // Display the modified string
    return 0;
}
void del_char(char *str, char ch)
{
    int i, j;
    // Traverse the string
    for (i = 0, j = 0; i <= strlen(str) - 1; i++)
    {
        if (str[i] != ch) // If character is not equal to 'ch'
        str[j++] = str[i]; // Copy character to new position
    }
    str[j] = '\0'; // Null-terminate the modified string
}
