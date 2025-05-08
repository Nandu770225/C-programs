// Convert Lowercase to Uppercase
#include<stdio.h>
#include<ctype.h>

int main() 
{
    FILE *fp;
    char ch;
    fp = fopen("file.txt", "r+");
    while((ch = fgetc(fp)) != EOF) 
    {
        if(islower(ch)) 
        {
            fseek(fp, -1, SEEK_CUR);
            fputc(toupper(ch), fp);
        }
    }
    fclose(fp);
    return 0;
}