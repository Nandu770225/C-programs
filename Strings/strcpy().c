#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20], str2[20];
    
    printf("Enter a string ");
    scanf("%s", str2);  
    
    strcpy(str1, str2);
    printf("First string :%s \t Second string : %s\n", str1, str2);
    
    strcpy(str1, "Delhi");
    strcpy(str2, "Bangalore");
    printf("First string :%s \t Second string : %s\n", str1, str2);
    
    return 0;
}