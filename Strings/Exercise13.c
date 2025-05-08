// Write your own pointer versions of the library functions strncpy(), strncmp(), strcat().
#include<stdio.h>

char *mystrncpy(char *dest, const char *src, size_t n) 
{
    char *d = dest;
    while (n-- && (*d++ = *src++));
    while (n-- > 0) *d++ = '\0';
    return dest;
}
int mystrncmp(const char *s1, const char *s2, size_t n) 
{
    while (n-- && *s1 && (*s1 == *s2)) 
    {
        s1++;
        s2++;
    }
    return (n == -1 || !*s1 || !*s2) ? 0 : (*s1 - *s2);
}
char *mystrcat(char *dest, const char *src) 
{
    char *d = dest;
    while (*d) d++;
    while (*d++ = *src++);
    return dest;
}
int main() 
{
    char dest[100] = "Hello";
    char src[100] = " World";
    mystrncpy(dest + 5, src, 6);
    printf("After mystrncpy: %s\n", dest);
    printf("mystrncmp result: %d\n", mystrncmp(dest, "Hello World", 5));
    mystrcat(dest, " Again");
    printf("After mystrcat: %s\n", dest);
    return 0;
}