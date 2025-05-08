// Count Alphabets and Numeric Characters
#include<stdio.h>
#include<ctype.h>

int main() 
{
    FILE *fp;
    char ch;
    int alpha = 0, num = 0;
    fp = fopen("file.txt", "r");
    while((ch = fgetc(fp)) != EOF) 
    {
        if(isalpha(ch)) alpha++;
        if(isdigit(ch)) num++;
    }
    printf("Alphabets: %d\nNumbers: %d\n", alpha, num);
    fclose(fp);
    return 0;
}