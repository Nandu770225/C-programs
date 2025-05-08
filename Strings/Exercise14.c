#include<stdio.h>
#include<string.h>

char *strstr_r(const char *haystack, const char *needle) 
{
    char *last = NULL;
    const char *h = haystack;
    size_t needle_len = strlen(needle);
    
    while ((h = strstr(h, needle)) != NULL) 
    {
        last = (char *)h;
        h += needle_len;
    }
    return last;
}
int main() 
{
    char haystack[100] = "Hello Hello World Hello";
    char needle[100] = "Hello";
    char *result = strstr_r(haystack, needle);
    if (result) 
    {
        printf("Last occurrence starts at: %s\n", result);
    } 
    else 
    {
        printf("Needle not found\n");
    }
    return 0;
}