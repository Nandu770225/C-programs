#include <stdio.h>  
#include <string.h> 

int main()  
{
    char s[80];     // Buffer to store formatted string (79 chars + null terminator)
    int x;          // Stores integer input
    double y;       // Stores double input

    printf("Enter an integer and a double:\n");
    scanf("%d%lf", &x, &y); 

    // Format and store the output in 's'
    sprintf(s, "integer:%6d\n double:%8.2f", x, y);
    
    printf("%s\n%s\n", "The formatted output stored in array s is:", s);
    return 0;  
}