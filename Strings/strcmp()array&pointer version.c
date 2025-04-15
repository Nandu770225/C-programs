#include <stdio.h>

// strcmp using array version
int StrCmp_OwnImple(char str1[], char str2[]) 
{
    int i = 0;

    while ((str1[i] != '\0') && (str2[i] != '\0') && (str1[i] == str2[i])) 
    {
        i++;
    }

    if (str1[i] == str2[i])
        return 0;
    else
        return (str1[i] - str2[i]);
}
int main() 
{
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    int result = StrCmp_OwnImple(s1, s2);

    if (result == 0)
        printf("Strings are equal.\n");
    else if (result > 0)
        printf("First string is greater than second.\n");
    else
        printf("First string is less than second.\n");

    return 0;
}

/*#include <stdio.h>

int StrCmp_PointerVersion(char *str1, char *str2)     // strcmp using pointers
{
    while (*str1 && *str2 && (*str1 == *str2)) 
    {
        str1++;
        str2++;
    }

    return (*str1 - *str2);
}

int main() 
{
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    int result = StrCmp_PointerVersion(s1, s2);

    if (result == 0)
        printf("Strings are equal.\n");
    else if (result > 0)
        printf("First string is greater than second.\n");
    else
        printf("First string is less than second.\n");

    return 0;
}*/
