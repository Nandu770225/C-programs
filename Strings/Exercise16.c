// Write a program to find the number of occurrences of a particular word in a string.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int countWordOccurrences(const char *str, const char *word) 
{
    int count = 0;
    int wordLen = strlen(word);
    const char *p = str;
    
    while ((p = strstr(p, word)) != NULL) 
    {
        if ((p == str || !isalnum((unsigned char)*(p - 1))) && 
            (!isalnum((unsigned char)*(p + wordLen)))) 
        {
            count++;
        }
        p += wordLen;
    }
    return count;
}
int main() 
{
    char str[1000], word[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    printf("Enter the word to find: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = 0;
    int count = countWordOccurrences(str, word);
    printf("Number of occurrences of '%s': %d\n", word, count);
    return 0;
}