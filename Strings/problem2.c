// P10.30 Program to test whether a string is palindrome or not 

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50]; 
    int i, j;

    printf("Enter a string: ");
    gets(str); 
    // Initialize i to 0 (start) and j to strlen(str) - 1 (end)
    for (i = 0, j = strlen(str) - 1; i <= j; i++, j--)
    {
        if (str[i] != str[j]) // Compare characters from start and end
            break; // Break the loop if mismatch found
    }
    if (i > j)
        printf("String is a palindrome\n"); 
    else
        printf("String is not a palindrome\n"); 
    return 0;
}
