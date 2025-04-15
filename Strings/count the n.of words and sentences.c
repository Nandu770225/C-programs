#include <stdio.h>
#include <string.h>
#define MAX 1000  

int main()
{
    char myText[MAX];  // Array to store input text
    int i, n, wCount = 0, lCount = 0;
    char c;  
    while ((c = getchar()) != 0)
    myText[i++] = c;
    myText[i] = '\0';  // Null-terminate the string

    n = strlen(myText);  // Get the total number of characters
    for (i = 0; i < n; i++) 
    {
        switch (myText[i]) 
        {
            case ' ':  // Count words by space
                wCount++;
                break;
            case '.':  // Count sentences by periods
                lCount++;
                break;
        }
    }

    printf("\nThe number of words is %d and sentences is %d\n", wCount, lCount);

    return 0;
}
