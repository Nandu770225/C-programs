// Program to count the number of words in a string and print each word on a separate line 

#include<stdio.h>
#include<ctype.h> // for isspace() function

int count_words(char *str); // Function prototype

int main()
{
    char str[50] = "blue green red"; 
    printf("Number of words in string = %d\n", count_words(str)); // Call the function and print word count
    return 0;
}
int count_words(char *str)
{
    int count = 0;
    while (*str != '\0') // Loop until end of string
    {
        while (isspace(*str)) // Skip whitespace characters
            str++;

        if (*str == '\0') // If end of string after spaces, exit
            return count;

        while (!isspace(*str) && *str != '\0') // Print word character-by-character
        {
            putchar(*str);
            str++;
        }
        count++; // Increment word count
        printf("\n"); 
    }
    return count; // Return total word count
}
