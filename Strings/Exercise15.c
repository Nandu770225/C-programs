// Write a program to replace all occurrences of word "Bangalore" by "Bengaluru" in a string.
#include<stdio.h>
#include<string.h>
#include<ctype.h> 

// Function to replace all occurrences of oldWord with newWord in str
void replaceWord(char *str, const char *oldWord, const char *newWord) 
{
    char result[1000]; 
    int i = 0, j = 0;  
    int oldLen = strlen(oldWord); 
    int newLen = strlen(newWord); 
    
    // Traverse the input string
    while (str[i]) 
    {
        if (strncmp(str + i, oldWord, oldLen) == 0 && 
            (i == 0 || !isalnum((unsigned char)str[i-1])) && 
            (!isalnum((unsigned char)str[i + oldLen]))) 
        {
            strcpy(result + j, newWord); 
            i += oldLen; 
            j += newLen;
        } 
        else 
        {
            result[j++] = str[i++]; 
        }
    }
    result[j] = '\0'; 
    strcpy(str, result); 
}
int main() 
{
    char str[1000]; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = 0; 
    replaceWord(str, "Bangalore", "Bengaluru");
    printf("Modified string: %s\n", str);
    return 0;
}