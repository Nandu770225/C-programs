// Concatenating Two Strings
#include<stdio.h>
#include<string.h>

int main() 
{
    char str1[100] = "Hello, ";
    char str2[] = "world!";

    strcat(str1, str2);  // Append str2 to str1
    printf("Concatenated String: %s\n", str1);
    return 0;
}
// Multiple strcat() Calls
/*#include <stdio.h>     
#include <string.h>    

int main()
 {
    char sentence[200] = "";  // Declare a large enough char array and initialize it as an empty string

    char part1[] = "C programming ";
    char part2[] = "is fun ";
    char part3[] = "and powerful!";

    strcat(sentence, part1);
    strcat(sentence, part2);
    strcat(sentence, part3);

    printf("Final Sentence: %s\n", sentence);    // Print the final combined sentence
    return 0;  
}*/
