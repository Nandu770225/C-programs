#include <stdio.h>
#include <string.h>
#define MAX_LEN 50

void swapStrings(char str1[], char str2[]) 
{
    char temp[MAX_LEN];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main() {
    char str1[MAX_LEN] = "sai";
    char str2[MAX_LEN] = "nanda";
    
    printf("Before swap:\n str1: %s\n str2: %s\n", str1, str2);
    
    swapStrings(str1, str2);
    
    printf("\nAfter swap:\n str1: %s\n str2: %s\n", str1, str2);
    return 0;
}