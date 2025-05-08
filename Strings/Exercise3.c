#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *combine(char *arr1, char *arr2)
{
    char *str = malloc(80 * sizeof(char));
    if (str == NULL) 
    {
        return NULL;
    }
    strcpy(str, arr1);
    strcat(str, arr2);
    return str;
}
int main()
{
    char str1[20], str2[20];
    char *p;
    strcpy(str1, "Suresh ");
    strcpy(str2, "Kumar");
    p = combine(str1, str2);
    if (p != NULL) 
    {
        puts(p);
        free(p);
    }
    return 0;
}