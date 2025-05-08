#include<stdio.h>   
#include<string.h>
#define BUF_SIZE 20  

int main(void)
{
    char buffer[BUF_SIZE + 1];  // Create a buffer of 21 bytes (20 + 1 for null terminator)
    char *string;               // Pointer to hold the returned address from memset

    memset(buffer, 0, sizeof(buffer));     // Clear the buffer to all 0s
    string = (char *) memset(buffer, 'A', 10);   // Fill first 10 bytes with 'A'
    printf("\nBuffer contents1: %s\n", string);  // Print buffer from string pointer

    memset(buffer + 10, 'B', 10);     // Fill next 10 bytes with 'B'
    printf("\nBuffer contents2: %s\n", buffer);  // here Print the entire buffer
    return 0;
}
