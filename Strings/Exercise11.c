// Write a function to extract a substring from a string.
#include<stdio.h>
#include<string.h>

void extractSubstring(char *str, char *result, int start, int length) 
{
    if (start < 0 || length <= 0 || start >= strlen(str)) 
    {
        result[0] = '\0';
        return;
    }
    // Extract substring
    int end = start + length;
    if (end > strlen(str)) end = strlen(str);
    strncpy(result, str + start, end - start);
    result[end - start] = '\0';
}
int main() 
{
    char str[100], result[100];
    int start, length;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    printf("Enter start position: ");
    scanf("%d", &start);
    printf("Enter length: ");
    scanf("%d", &length);
    extractSubstring(str, result, start, length);
    printf("Substring: %s\n", result);
    return 0;
}