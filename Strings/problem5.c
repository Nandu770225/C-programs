// Program to read in a string and output the frequency of each character

#include<stdio.h>
#include<string.h> 

void count(char *str); 
int main()
{
    char str[50];
    printf("Enter a string: ");
    gets(str); // Read string from user 
    count(str); // Call the function to count characters
    return 0;
}
void count(char *str)
{
    char ch;
    int i, j, count, n;
    n = strlen(str); // Find length of string
    for (i = 0; i < n; i++)
    {
        if (str[i] != '\0') // If character is not already counted
        {
            ch = str[i];
            count = 0;
            for (j = i; j < n; j++) 
            {
                if (str[j] == ch)
                {
                    count++;
                    str[j] = '\0'; 
                }
            }
            printf("%c occurs %d times\n", ch, count);
        }
    }
}
