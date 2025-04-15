// array version
#include <stdio.h>
int main() 
{
    char str[] = "learner";
    int i = 0;
    while (str[i] != '\0') 
    {
        i++;
    }
    printf("Length of the string is: %d\n", i);
    return 0;
}
// pointer version

/*#include <stdio.h>
int main() 
{
    char *str = "learner";
    int length = 0;
    while (*str != '\0') 
    {
        length++;
        str++;
    }
    printf("Length of the string is: %d\n", length);
    return 0;
}*/
