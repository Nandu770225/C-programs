// write a recursive functions for finding length of a string and displaying the string in front and reverse order.
#include<stdio.h>

// Function declarations
int length(char *str);
void display(char *str);
void Rdisplay(char *str);

int main()
{
    char str[50] = "Devanshi";
    printf("%d\n", length(str)); // Print the length of the string
    display(str);                // Display the string normally
    printf("\n");
    Rdisplay(str);               // Display the string in reverse
    return 0;
}
// Function to calculate the length of a string recursively
int length(char *str)
{
    if (*str == '\0') 
    return 0;
    return (1 + length(str + 1)); // Move to the next character
}
// Function to display the string recursively
void display(char *str)
{
    if (*str == '\0') 
    return;
    putchar(*str);    // Print current character
    display(str + 1); // Recursive call for next character
}
// Function to display the string in reverse recursively
void Rdisplay(char *str)
{
    if (*str == '\0') 
    return;
    Rdisplay(str + 1); // First, recursive call for next character
    putchar(*str);     // Then, print current character (after recursion returns)
}
