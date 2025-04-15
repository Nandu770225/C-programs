#include <string.h>
#include <stdio.h>

int main() 
{
    char str[] = "learner";  // A string (char array) initialized with "learner"
    short int Length = strlen(str);  // Get the length of the string and store in a short int

    printf("The length of the string is : %d", Length);
    return 0;
}

// one more program for strlen()                               

/*#include<stdio.h>
#include<string.h> 

int main() 
{
    char name[] = "OpenAI";
    int length = strlen(name);

    printf("The string is: %s\n", name);
    printf("Length of the string is: %d\n", length);

    return 0;
}*/


