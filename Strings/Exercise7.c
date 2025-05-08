// Write a function for performing case sensitive string comparison.
#include<stdio.h>
#include<string.h>

int compareStrings(const char *str1, const char *str2) 
{
    // Compare two strings and return difference
    return strcmp(str1, str2);
}
int main() 
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;
    int result = compareStrings(str1, str2);
    if (result == 0) 
    {
        printf("Strings are equal\n");
    }
    else if (result < 0) 
    {
        printf("First string is less than second\n");
    } 
    else 
    {
        printf("First string is greater than second\n");
    }
    return 0;
}