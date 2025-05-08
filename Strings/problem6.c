#include<stdio.h>
#include<string.h>

int find_firstNR(char str[]); 
int main()
{
    char str[50] = "Suresh Kumar Srivastava"; 
    printf("%d\n", find_firstNR(str));        
    return 0;
}
// Function to find the index of the first non-repeating character
int find_firstNR(char str[])
{
    int i, j;
    int end = strlen(str) - 1; // Get the last index of the string

    for (i = 0; i < end; i++) // Loop through each character
    {
        for (j = 0; j <= end; j++) 
        {
            // If a match is found at a different position, break
            if (str[i] == str[j] && i != j)
            break;
        }
        // If loop completed without a break, character is non-repeating
        if (j == end + 1)
        return i; // Return the index of the first non-repeating character
    }
    return -1; // If no non-repeating character is found
}
