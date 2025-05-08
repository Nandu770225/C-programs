#include<stdio.h>
#include<string.h>

int main(int argc, char **argv) 
{
    char *result;
    
    if (argc != 2) 
    {
        printf("Usage: %s string\n", argv[0]);
    }
    else 
    {                      // Search for character 'N' in the input string
        if ((result = (char *)memchr(argv[1], 'N', strlen(argv[1]))) != NULL)   
        {
            printf("The string starting with N is %s\n", result);
        }
        else 
        {
            printf("The letter N cannot be found in the string\n");
        }
    }
    return 0;
}